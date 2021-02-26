#include "cm_fdisk.h"

cm_fdisk::cm_fdisk()
{
    u = 'K';
    type = 'P';
    f = 'W';
    borrar = false;
    agregar = false;
    size = 0;
}

void cm_fdisk::ejecutar(){
    if(path == "" || name == ""){
        cout<<"Los parametros obligatorios no se han completado";
    }else if(borrar && agregar){
        cout<<"Los comandos DELETE y ADD no pueden ir juntos";
    }else if(agregar && size == 0){
        cout<<"Size necesita ser declarado o diferente a 0";
    }else{
        if(borrar){
            //R -> Fast ; F -> Full
            //Eliminar la particion
        }else if(agregar){
            //Agrega o quitar espacio a la particion
        }else{
            //Crear una nueva particion
            if (path.find("\"") != std::string::npos) {
                path = path.erase(0,1);
                path = path.erase(strlen(path.c_str()) - 1, 1);
            }
            //Comprobamos si el disco existe
            if(fopen(path.c_str(), "r")){

                //Obtenemos el struct del mbr
                FILE *archivo = fopen(path.c_str(),"rb+");
                mbr mbrDisco;
                fseek(archivo, 0, SEEK_SET);
                fread(&mbrDisco, sizeof(mbr), 1, archivo);
                fclose(archivo);

                if(size > 0){
                    //Obtenemos el size libre del disco
                    int freeSize = mbrDisco.mbr_size;
                    freeSize = freeSize - sizeof(mbr);
                    freeSize = freeSize - mbrDisco.particion1.part_size;
                    freeSize = freeSize - mbrDisco.particion2.part_size;
                    freeSize = freeSize - mbrDisco.particion3.part_size;
                    freeSize = freeSize - mbrDisco.particion4.part_size;
                    //Comprobamos que la particion quepa en el espacio disponible
                    switch(u){
                        case 'B':
                            size = size;
                        break;
                        case 'K':
                            size = size * 1024;
                        break;
                        case 'M':
                            size = size * 1024;
                        break;
                    }
                    if(size <= freeSize){
                        //Creamos el struct de la particion
                        particion nuevaParticion;
                        nuevaParticion.part_fit = f;
                        strncpy(nuevaParticion.part_name, name, 16);
                        nuevaParticion.part_size = size;
                        nuevaParticion.part_start = 0;
                        nuevaParticion.part_status = '1';
                        nuevaParticion.part_type = type;
                        switch(type){
                            case 'P':
                                //Buscamos si quedan particiones disponibles
                                if(mbrDisco.particion1.part_status == '0'){
                                    nuevaParticion.part_start = sizeof(mbr);
                                    mbrDisco.particion1 = nuevaParticion;
                                    freeSize = freeSize - size;
                                    cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                }else if(mbrDisco.particion2.part_status == '0'){
                                    nuevaParticion.part_start = mbrDisco.particion1.part_start + mbrDisco.particion1.part_size;
                                    mbrDisco.particion2 = nuevaParticion;
                                    freeSize = freeSize - size;
                                    cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                }else if(mbrDisco.particion3.part_status == '0'){
                                    nuevaParticion.part_start = mbrDisco.particion2.part_start + mbrDisco.particion2.part_size;
                                    mbrDisco.particion3 = nuevaParticion;
                                    freeSize = freeSize - size;
                                    cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                }else if(mbrDisco.particion4.part_status == '0'){
                                    nuevaParticion.part_start = mbrDisco.particion3.part_start + mbrDisco.particion3.part_size;
                                    mbrDisco.particion4 = nuevaParticion;
                                    freeSize = freeSize - size;
                                    cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                }else{
                                    cout<<"No existe ninguna particion libre";
                                }
                            break;
                            case 'E':
                                //Buscamos si quedan particiones disponibles
                                if(mbrDisco.particion1.part_type == 'E' || mbrDisco.particion2.part_type == 'E' || mbrDisco.particion3.part_type == 'E' || mbrDisco.particion4.part_type == 'E'){
                                    cout<<"Ya existe una particion de tipo extendida";
                                }else{
                                    if(mbrDisco.particion1.part_status == '0'){
                                        nuevaParticion.part_start = sizeof(mbr);
                                        mbrDisco.particion1 = nuevaParticion;
                                        freeSize = freeSize - size;
                                        cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                    }else if(mbrDisco.particion2.part_status == '0'){
                                        nuevaParticion.part_start = mbrDisco.particion1.part_start + mbrDisco.particion1.part_size;
                                        mbrDisco.particion2 = nuevaParticion;
                                        freeSize = freeSize - size;
                                        cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                    }else if(mbrDisco.particion3.part_status == '0'){
                                        nuevaParticion.part_start = mbrDisco.particion2.part_start + mbrDisco.particion2.part_size;
                                        mbrDisco.particion3 = nuevaParticion;
                                        freeSize = freeSize - size;
                                        cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                    }else if(mbrDisco.particion4.part_status == '0'){
                                        nuevaParticion.part_start = mbrDisco.particion3.part_start + mbrDisco.particion3.part_size;
                                        mbrDisco.particion4 = nuevaParticion;
                                        freeSize = freeSize - size;
                                        cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
                                    }else{
                                        cout<<"No existe ninguna particion libre";
                                    }
                                }
                            break;
                            case 'L':
                                //Buscamos si existe una particion extendida para alojar a la nueva particion logica
                                if(mbrDisco.particion1.part_type == 'E'){

                                }else if(mbrDisco.particion2.part_type == 'E'){

                                }else if(mbrDisco.particion3.part_type == 'E'){

                                }else if(mbrDisco.particion4.part_type == 'E'){

                                }else{
                                    cout<<"No existe ninguna particion de tipo extendida";
                                }
                            break;
                        }
                        //Reescribimos el mbr
                        archivo = fopen(path.c_str(), "rb+");
                        if(archivo != NULL){
                            fseek(archivo, 0, SEEK_SET);
                            fwrite(&mbrDisco, sizeof(mbr), 1, archivo);
                            fclose(archivo);
                        }
                    }else{
                        cout<<"Espacio restante en disco: "<<freeSize<<", espacio requerido para la nueva particion: "<<size;
                    }
                }else{
                    cout<<"Size debe de ser mayor a 0";
                }
            }else{
                cout<<"El disco no existe";
            }
        }
    }
}
