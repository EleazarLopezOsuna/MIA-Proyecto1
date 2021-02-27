#include "cm_fdisk.h"

cm_fdisk::cm_fdisk()
{
    u = 'K';
    type = 'P';
    f = 'W';
    size = 0;
    borrar = false;
    agregar = false;
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
            particion vacia;
            vacia.part_fit = '-';
            vacia.part_status = '0';
            vacia.part_type = '-';
            vacia.part_name[0] = '\0';
            if (path.find("\"") != std::string::npos) {
                path = path.erase(0,1);
                path = path.erase(strlen(path.c_str()) - 1, 1);
            }
            if(tipo_borrar == 'R'){
                FILE *archivo = fopen(path.c_str(),"rb+");
                mbr mbrDisco;
                fseek(archivo, 0, SEEK_SET);
                fread(&mbrDisco, sizeof(mbr), 1, archivo);
                fclose(archivo);
                if(strcmp(mbrDisco.particion1.part_name,name) == 0 ){
                    vacia.part_size = mbrDisco.particion1.part_size;
                    vacia.part_start = mbrDisco.particion1.part_start;
                    mbrDisco.particion1 = vacia;
                }else if(strcmp(mbrDisco.particion2.part_name,name) == 0 ){
                    vacia.part_size = mbrDisco.particion2.part_size;
                    vacia.part_start = mbrDisco.particion2.part_start;
                    mbrDisco.particion2 = vacia;
                }else if(strcmp(mbrDisco.particion3.part_name,name) == 0 ){
                    vacia.part_size = mbrDisco.particion3.part_size;
                    vacia.part_start = mbrDisco.particion3.part_start;
                    mbrDisco.particion3 = vacia;
                }else if(strcmp(mbrDisco.particion4.part_name,name) == 0 ){
                    vacia.part_size = mbrDisco.particion4.part_size;
                    vacia.part_start = mbrDisco.particion4.part_start;
                    mbrDisco.particion4 = vacia;
                }else{
                    //Buscar en la particion extendida
                }
                //Reescribimos el mbr
                archivo = fopen(path.c_str(), "rb+");
                if(archivo != NULL){
                    fseek(archivo, 0, SEEK_SET);
                    fwrite(&mbrDisco, sizeof(mbr), 1, archivo);
                    fclose(archivo);
                }
            }else{
                FILE *archivo = fopen(path.c_str(),"rb+");
                mbr mbrDisco;
                fseek(archivo, 0, SEEK_SET);
                fread(&mbrDisco, sizeof(mbr), 1, archivo);
                fclose(archivo);
                if(strcmp(mbrDisco.particion1.part_name,name) == 0 ){
                    mbrDisco.particion1 = reescribirParticion(vacia, mbrDisco.particion1, path);
                }else if(strcmp(mbrDisco.particion2.part_name,name) == 0 ){
                    mbrDisco.particion2 = reescribirParticion(vacia, mbrDisco.particion2, path);
                }else if(strcmp(mbrDisco.particion3.part_name,name) == 0 ){
                    mbrDisco.particion3 = reescribirParticion(vacia, mbrDisco.particion3, path);
                }else if(strcmp(mbrDisco.particion4.part_name,name) == 0 ){
                    mbrDisco.particion4 = reescribirParticion(vacia, mbrDisco.particion4, path);
                }else{
                    //Buscar en la particion extendida
                }
                //Reescribimos el mbr
                archivo = fopen(path.c_str(), "rb+");
                if(archivo != NULL){
                    fseek(archivo, 0, SEEK_SET);
                    fwrite(&mbrDisco, sizeof(mbr), 1, archivo);
                    fclose(archivo);
                }
            }
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
                    if(type == 'P' || type == 'E'){
                        //Comprobamos si existe espacio en el disco para almacenar la particion
                        if(size <= freeSize){
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
                                        mbrDisco = insertPart(mbrDisco, nuevaParticion, 1, freeSize);
                                    }else if(mbrDisco.particion2.part_status == '0'){
                                        mbrDisco = insertPart(mbrDisco, nuevaParticion, 2, freeSize);
                                    }else if(mbrDisco.particion3.part_status == '0'){
                                        mbrDisco = insertPart(mbrDisco, nuevaParticion, 3, freeSize);
                                    }else if(mbrDisco.particion4.part_status == '0'){
                                        mbrDisco = insertPart(mbrDisco, nuevaParticion, 4, freeSize);
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
                                            mbrDisco = insertPart(mbrDisco, nuevaParticion, 1, freeSize);
                                        }else if(mbrDisco.particion2.part_status == '0'){
                                            mbrDisco = insertPart(mbrDisco, nuevaParticion, 2, freeSize);
                                        }else if(mbrDisco.particion3.part_status == '0'){
                                            mbrDisco = insertPart(mbrDisco, nuevaParticion, 3, freeSize);
                                        }else if(mbrDisco.particion4.part_status == '0'){
                                            mbrDisco = insertPart(mbrDisco, nuevaParticion, 4, freeSize);
                                        }else{
                                            cout<<"No existe ninguna particion libre";
                                        }
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
                        //Se trata de una particion logica, la capacidad se comprueba con el espacio libre de la particion extendida
                        ebr ebrDisco;
                        ebr ebrNuevo;
                        //Llenamos la informacion para el nuevo ebr
                        ebrNuevo.part_fit = f;
                        strncpy(ebrNuevo.part_name, name, 16);
                        ebrNuevo.part_next = -1;
                        ebrNuevo.part_size = size;
                        ebrNuevo.part_start = 0;
                        ebrNuevo.part_status = '1';
                        //Buscamos si existe una particion extendida para alojar a la nueva particion logica
                        if(mbrDisco.particion1.part_type == 'E'){
                            archivo = fopen(path.c_str(), "rb+");
                            if(archivo != NULL){
                                fseek(archivo, mbrDisco.particion1.part_start, SEEK_SET);
                                fread(&ebrDisco, sizeof(ebr), 1, archivo);
                                fclose(archivo);
                            }
                            checkExtendedSpace(archivo, ebrDisco, mbrDisco.particion1.part_size, ebrNuevo, mbrDisco.particion1.part_start);
                        }else if(mbrDisco.particion2.part_type == 'E'){
                            archivo = fopen(path.c_str(), "rb+");
                            if(archivo != NULL){
                                fseek(archivo, mbrDisco.particion2.part_start, SEEK_SET);
                                fread(&ebrDisco, sizeof(ebr), 1, archivo);
                                fclose(archivo);
                            }
                            checkExtendedSpace(archivo, ebrDisco, mbrDisco.particion2.part_size, ebrNuevo, mbrDisco.particion2.part_start);
                        }else if(mbrDisco.particion3.part_type == 'E'){
                            archivo = fopen(path.c_str(), "rb+");
                            if(archivo != NULL){
                                fseek(archivo, mbrDisco.particion3.part_start, SEEK_SET);
                                fread(&ebrDisco, sizeof(ebr), 1, archivo);
                                fclose(archivo);
                            }
                            checkExtendedSpace(archivo, ebrDisco, mbrDisco.particion3.part_size, ebrNuevo, mbrDisco.particion3.part_start);
                        }else if(mbrDisco.particion4.part_type == 'E'){
                            archivo = fopen(path.c_str(), "rb+");
                            if(archivo != NULL){
                                fseek(archivo, mbrDisco.particion4.part_start, SEEK_SET);
                                fread(&ebrDisco, sizeof(ebr), 1, archivo);
                                fclose(archivo);
                            }
                            checkExtendedSpace(archivo, ebrDisco, mbrDisco.particion4.part_size, ebrNuevo, mbrDisco.particion4.part_start);
                        }else{
                            cout<<"No existe ninguna particion de tipo extendida";
                        }
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

particion cm_fdisk::reescribirParticion(particion vacia, particion part, string path){
    vacia.part_size = part.part_size;
    vacia.part_start = part.part_start;
    char buffer[part.part_size];
    for(int i = 0; i < part.part_size; i++){
        buffer[i] = '\0';
    }
    //Reescribimos el archivo con 0
    FILE *archivo = fopen(path.c_str(), "rb+");
    if(archivo != NULL){
        fseek(archivo, part.part_start, SEEK_SET);
        fwrite(&buffer, part.part_size, 1, archivo);
        fclose(archivo);
    }
    return vacia;
}

void cm_fdisk::reescribirExtendida(ebr pruebaEbr, string path, char nombre[16], int accion){
    while(pruebaEbr.part_next > 0){
        posicion = pruebaEbr.part_next;
        archivo=fopen(path.c_str(),"rb+");
        fseek(archivo, posicion, SEEK_SET);
        fread(&pruebaEbr, sizeof(mbr), 1, archivo);
        if(strcmp(pruebaEbr.part_name,name) == 0 ){
            if(accion == 1){
                //Fast
            }else{

            }
        }
        fclose(archivo);
    }
}

mbr cm_fdisk::insertPart(mbr mbrDisco, particion nuevaParticion, int posicion, int freeSize){
    if(posicion == 1){
        nuevaParticion.part_start = sizeof(mbr);
        mbrDisco.particion1 = nuevaParticion;
    }else if(posicion == 2){
        nuevaParticion.part_start = mbrDisco.particion1.part_start + mbrDisco.particion1.part_size;
        mbrDisco.particion2 = nuevaParticion;
    }else if(posicion == 3){
        nuevaParticion.part_start = mbrDisco.particion2.part_start + mbrDisco.particion2.part_size;
        mbrDisco.particion3 = nuevaParticion;
    }else{
        nuevaParticion.part_start = mbrDisco.particion3.part_start + mbrDisco.particion3.part_size;
        mbrDisco.particion4 = nuevaParticion;
    }
    freeSize = freeSize - nuevaParticion.part_size;
    cout<<"Particion creada, espacio disponible en el disco: "<<freeSize;
    return mbrDisco;
}

void cm_fdisk::checkExtendedSpace(FILE *archivo, ebr ebrDisco, int partSize, ebr ebrNuevo, int posicion){
    int freeSize = partSize;
    int newSize = ebrNuevo.part_size;
    ebr temp = ebrDisco;
    if(ebrDisco.part_size == 0){
        //No existe ninguna particion logica
        newSize += sizeof(ebr);
        if(newSize > freeSize){
            cout<<"El espacio disponible no es suficiente, espacio disponible: "<<freeSize<<" espacio requerido: "<<newSize;
        }else{
            ebrNuevo.part_start = posicion + sizeof(ebr);
            insertInExtended(archivo, ebrNuevo, posicion, freeSize);
        }
    }else{
        while(temp.part_next > 0){
            freeSize = freeSize - temp.part_size - sizeof(ebr);
            archivo = fopen(path.c_str(), "rb+");
            if(archivo != NULL){
                fseek(archivo, temp.part_next, SEEK_SET);
                fread(&temp, sizeof(ebr), 1, archivo);
                fclose(archivo);
            }
        }
        if(newSize > freeSize){
            cout<<"El espacio disponible no es suficiente, espacio disponible: "<<freeSize<<" espacio requerido: "<<newSize;
        }else{
            //temp es la ultima particion creada, creamos el "apuntador" hacia el siguiente ebr
            temp.part_next = temp.part_start + temp.part_size;
            //Reescribimos el ebr temporal
            archivo = fopen(path.c_str(), "rb+");
            if(archivo != NULL){
                fseek(archivo, (temp.part_start - sizeof(ebr)), SEEK_SET);
                fwrite(&temp, sizeof(ebr), 1, archivo);
                fclose(archivo);
            }
            //Escribimos el nuevo ebr
            ebrNuevo.part_start = temp.part_start + temp.part_size + sizeof(ebr);
            insertInExtended(archivo, ebrNuevo, (temp.part_start + temp.part_size), freeSize);
        }
    }
}

void cm_fdisk::insertInExtended(FILE *archivo, ebr ebrNuevo, int posicion, int freeSize){
    archivo = fopen(path.c_str(), "rb+");
    if(archivo != NULL){
        fseek(archivo, posicion, SEEK_SET);
        fwrite(&ebrNuevo, sizeof(ebr), 1, archivo);
        fclose(archivo);
    }
    freeSize = freeSize - ebrNuevo.part_size - sizeof(ebr);
    cout<<"Particion logica creada, espacio disponible en la particion extendida: "<<freeSize;
}
