#include "cm_rep.h"

cm_rep::cm_rep()
{
    name = -1;
}

void cm_rep::ejecutar(){
    string buscar = "/home/jared/Desktop/";
    bool existeExtendida = false;
    int inicio = 0;
    string grafica = "digraph Alf {node [ shape = record ];";
    string izquierda = "{";
    string derecha = "{";
    float porcentaje = 0;
    char ejecutarDot[1024];
    char ruta[255];
    for (int i = 0; i < 1024; i++) {
        ejecutarDot[i] = '\0';
    }
    for (int i = 0; i < 255; i++) {
        ruta[i] = '\0';
    }

    if(path == "" || name == -1 || id == ""){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
        switch(name){
        case 1:
        {
            cout<<"Generando reporte MBR"<<endl;
            id.erase(std::remove(id.begin(), id.end(), '"'), id.end());
            buscar += id + ".dk";

            FILE *archivo=fopen(buscar.c_str(),"rb+");
            mbr prueba;
            fseek(archivo, 0, SEEK_SET);
            fread(&prueba, sizeof(mbr), 1, archivo);
            fclose(archivo);
            grafica += "Decl [ label = \"";
            izquierda += "MBR FIT";
            derecha += prueba.disk_fit;
            izquierda += "|MBR FECHA";
            char buffer[25];
            strftime(buffer,25, "%c", gmtime(&prueba.mbr_creacion));
            derecha = derecha + "|" + buffer + "";
            izquierda += "|MBR SIZE";
            derecha += "|" + to_string(prueba.mbr_size);

            izquierda += "|PARTICION 1 FIT";
            derecha += "|";
            derecha += prueba.particion1.part_fit;
            izquierda += "|PARTICION 1 NOMBRE";
            derecha = derecha + "|" + prueba.particion1.part_name;
            izquierda += "|PARTICION 1 SIZE";
            derecha += "|" + to_string(prueba.particion1.part_size);
            izquierda += "|PARTICION 1 START";
            derecha += "|" + to_string(prueba.particion1.part_start);
            izquierda += "|PARTICION 1 STATUS";
            derecha += "|";
            derecha += prueba.particion1.part_status;
            izquierda += "|PARTICION 1 TYPE";
            derecha += "|";
            derecha += prueba.particion1.part_type;

            izquierda += "|PARTICION 2 FIT";
            derecha += "|";
            derecha += prueba.particion2.part_fit;
            izquierda += "|PARTICION 2 NOMBRE";
            derecha = derecha + "|" + prueba.particion2.part_name;
            izquierda += "|PARTICION 2 SIZE";
            derecha += "|" + to_string(prueba.particion2.part_size);
            izquierda += "|PARTICION 2 START";
            derecha += "|" + to_string(prueba.particion2.part_start);
            izquierda += "|PARTICION 2 STATUS";
            derecha += "|";
            derecha += prueba.particion2.part_status;
            izquierda += "|PARTICION 2 TYPE";
            derecha += "|";
            derecha += prueba.particion2.part_type;

            izquierda += "|PARTICION 3 FIT";
            derecha += "|";
            derecha += prueba.particion3.part_fit;
            izquierda += "|PARTICION 3 NOMBRE";
            derecha = derecha + "|" + prueba.particion3.part_name;
            izquierda += "|PARTICION 3 SIZE";
            derecha += "|" + to_string(prueba.particion3.part_size);
            izquierda += "|PARTICION 3 START";
            derecha += "|" + to_string(prueba.particion3.part_start);
            izquierda += "|PARTICION 3 STATUS";
            derecha += "|";
            derecha += prueba.particion3.part_status;
            izquierda += "|PARTICION 3 TYPE";
            derecha += "|";
            derecha += prueba.particion3.part_type;

            izquierda += "|PARTICION 4 FIT";
            derecha += "|";
            derecha += prueba.particion4.part_fit;
            izquierda += "|PARTICION 4 NOMBRE";
            derecha = derecha + "|" + prueba.particion4.part_name;
            izquierda += "|PARTICION 4 SIZE";
            derecha += "|" + to_string(prueba.particion4.part_size);
            izquierda += "|PARTICION 4 START";
            derecha += "|" + to_string(prueba.particion4.part_start);
            izquierda += "|PARTICION 4 STATUS";
            derecha += "|";
            derecha += prueba.particion4.part_status;
            izquierda += "|PARTICION 4 TYPE}";
            derecha += "|";
            derecha += prueba.particion4.part_type;

            grafica += izquierda + "|" + derecha + "}\"];";

            int i = 1;
            int posicion = 0;
            ebr pruebaEbr;
            archivo=fopen(buscar.c_str(),"rb+");
            if(prueba.particion1.part_type == 'E'){
                inicio = prueba.particion1.part_start;
                existeExtendida = true;
            }else if(prueba.particion2.part_type == 'E'){
                inicio = prueba.particion2.part_start;
                existeExtendida = true;
            }else if(prueba.particion3.part_type == 'E'){
                inicio = prueba.particion3.part_start;
                existeExtendida = true;
            }else if(prueba.particion4.part_type == 'E'){
                inicio = prueba.particion4.part_start;
                existeExtendida = true;
            }
            if(existeExtendida){
                fseek(archivo, inicio, SEEK_SET);
                fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                fclose(archivo);

                grafica += "nodo" + to_string(i) + "[ label = \"";
                izquierda = "{";
                derecha = "{";

                izquierda += "Particion Logica}|{FIT";
                derecha += pruebaEbr.part_fit;
                izquierda += "|NOMBRE";
                derecha = derecha + "|" + pruebaEbr.part_name;
                izquierda += "|SIZE";
                derecha += "|" + to_string(pruebaEbr.part_size);
                izquierda += "|START";
                derecha += "|" + to_string(pruebaEbr.part_start);
                izquierda += "|STATUS";
                derecha += "|";
                derecha += pruebaEbr.part_status;
                izquierda += "|SIGUIENTE}";
                derecha += "|";
                i++;

                while(pruebaEbr.part_next > 0){
                    posicion = pruebaEbr.part_next;
                    archivo=fopen(buscar.c_str(),"rb+");
                    fseek(archivo, posicion, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);

                    derecha = derecha + pruebaEbr.part_name;
                    grafica += izquierda + "|" + derecha + "}\"];";

                    grafica += "nodo" + to_string(i) + "[ label = \"";
                    izquierda = "{";
                    derecha = "{";

                    izquierda += "Particion Logica}|{FIT";
                    derecha += pruebaEbr.part_fit;
                    izquierda += "|NOMBRE";
                    derecha = derecha + "|" + pruebaEbr.part_name;
                    izquierda += "|SIZE";
                    derecha += "|" + to_string(pruebaEbr.part_size);
                    izquierda += "|START";
                    derecha += "|" + to_string(pruebaEbr.part_start);
                    izquierda += "|STATUS";
                    derecha += "|";
                    derecha += pruebaEbr.part_status;
                    izquierda += "|SIGUIENTE}";
                    derecha += "|";
                    i++;
                }
                grafica += izquierda + "|" + derecha + "}\"];}";

                path.erase(std::remove(path.begin(), path.end(), '"'), path.end());
                std::ofstream out("/home/jared/Desktop/reporteMBR.dot");
                out << grafica;
                out.close();

                strcpy(ejecutarDot, "dot -Tpng /home/jared/Desktop/reporteMBR.dot -o");
                strcat(ejecutarDot, " ");
                strcat(ejecutarDot, path.c_str());
                system(ejecutarDot);
                strcat(ruta, "xdg-open");
                strcat(ruta, " ");
                strcat(ruta, path.c_str());
                system(ruta);
            }
        }
            break;
        case 2:
        {
            int i = 1;
            int posicion = 0;
            ebr pruebaEbr;
            int sizeMbr = 0;
            cout<<"Generando reporte DISK"<<endl;
            id.erase(std::remove(id.begin(), id.end(), '"'), id.end());
            buscar += id + ".dk";

            FILE *archivo=fopen(buscar.c_str(),"rb+");
            mbr prueba;
            fseek(archivo, 0, SEEK_SET);
            fread(&prueba, sizeof(mbr), 1, archivo);
            fclose(archivo);
            sizeMbr = prueba.mbr_size;
            grafica += "rankdir = LR;node [ shape = record ];Decl [ label = \"{MBR";
            if(prueba.particion1.part_type == '-'){
                grafica += "|LIBRE";
            }else{
                if(prueba.particion1.part_type == 'P'){
                    porcentaje = ((prueba.particion1.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|PRIMARIA\\n" + to_string(porcentaje);
                    grafica += "% del disco";
                }else{
                    archivo=fopen(buscar.c_str(),"rb+");
                    fseek(archivo, prueba.particion1.part_start, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);

                    i++;
                    porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|{EXTENDIDA|{EBR|LOGICA\\n" + to_string(porcentaje);
                    while(pruebaEbr.part_next > 0){
                        posicion = pruebaEbr.part_next;
                        archivo=fopen(buscar.c_str(),"rb+");
                        fseek(archivo, posicion, SEEK_SET);
                        fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                        fclose(archivo);
                        porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                        grafica += "|EBR|LOGICA\\n" + to_string(porcentaje);
                        grafica += "% del disco";
                        i++;
                    }
                    grafica += "}}";
                }
            }

            if(prueba.particion2.part_type == '-'){
                grafica += "|LIBRE";
            }else{
                if(prueba.particion2.part_type == 'P'){
                    porcentaje = ((prueba.particion2.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|PRIMARIA\\n" + to_string(porcentaje);
                    grafica += "% del disco";
                }else{
                    archivo=fopen(buscar.c_str(),"rb+");
                    fseek(archivo, prueba.particion2.part_start, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);

                    i++;
                    porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|{EXTENDIDA|{EBR|LOGICA\\n" + to_string(porcentaje);
                    while(pruebaEbr.part_next > 0){
                        posicion = pruebaEbr.part_next;
                        archivo=fopen(buscar.c_str(),"rb+");
                        fseek(archivo, posicion, SEEK_SET);
                        fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                        fclose(archivo);
                        porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                        grafica += "|EBR|LOGICA\\n" + to_string(porcentaje);
                        grafica += "% del disco";
                        i++;
                    }
                    grafica += "}}";
                }
            }

            if(prueba.particion3.part_type == '-'){
                grafica += "|LIBRE";
            }else{
                if(prueba.particion3.part_type == 'P'){
                    porcentaje = ((prueba.particion3.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|PRIMARIA\\n" + to_string(porcentaje);
                    grafica += "% del disco";
                }else{
                    archivo=fopen(buscar.c_str(),"rb+");
                    fseek(archivo, prueba.particion3.part_start, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);

                    i++;
                    porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|{EXTENDIDA|{EBR|LOGICA\\n" + to_string(porcentaje);
                    while(pruebaEbr.part_next > 0){
                        posicion = pruebaEbr.part_next;
                        archivo=fopen(buscar.c_str(),"rb+");
                        fseek(archivo, posicion, SEEK_SET);
                        fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                        fclose(archivo);
                        porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                        grafica += "|EBR|LOGICA\\n" + to_string(porcentaje);
                        grafica += "% del disco";
                        i++;
                    }
                    grafica += "}}";
                }
            }

            if(prueba.particion4.part_type == '-'){
                grafica += "|LIBRE";
            }else{
                if(prueba.particion4.part_type == 'P'){
                    porcentaje = ((prueba.particion4.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|PRIMARIA\\n" + to_string(porcentaje);
                    grafica += "% del disco";
                }else{
                    archivo=fopen(buscar.c_str(),"rb+");
                    fseek(archivo, prueba.particion4.part_start, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);

                    i++;
                    porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                    grafica += "|{EXTENDIDA|{EBR|LOGICA\\n" + to_string(porcentaje);
                    while(pruebaEbr.part_next > 0){
                        posicion = pruebaEbr.part_next;
                        archivo=fopen(buscar.c_str(),"rb+");
                        fseek(archivo, posicion, SEEK_SET);
                        fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                        fclose(archivo);
                        porcentaje = ((pruebaEbr.part_size + 0.0) / sizeMbr) * 100;
                        grafica += "|EBR|LOGICA\\n" + to_string(porcentaje);
                        grafica += "% del disco";
                        i++;
                    }
                    grafica += "}}";
                }
            }
            grafica += "}\"]; }";


            path.erase(std::remove(path.begin(), path.end(), '"'), path.end());
            std::ofstream out("/home/jared/Desktop/reporteMBR.dot");
            out << grafica;
            out.close();

            strcpy(ejecutarDot, "dot -Tpng /home/jared/Desktop/reporteMBR.dot -o");
            strcat(ejecutarDot, " ");
            strcat(ejecutarDot, path.c_str());
            system(ejecutarDot);
            strcat(ruta, "xdg-open");
            strcat(ruta, " ");
            strcat(ruta, path.c_str());
            system(ruta);

        }
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        }
    }
}
