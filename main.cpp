#include <QCoreApplication>
#include "iostream"
#include <QString>
#include <parser.h>
#include <scanner.h>
#include <QTextStream>
#include <structsreportes.h>
using namespace std;

int p;
extern int linea;
extern int columna;
extern int yylineno;

int main(int argc, char *argv[])
{
/*
    cat -file1=Archivo1 -file2=Archivo2
    chgrp -usr=Usuario1 -grp=Grupo1
    chmod -path=/home -ugo=745 -r
    chown -path=/home -usr=Usuario1 -r
    mkdisk -path="/home/jared/Desktop/prueba.dk" -size=250 -u=K -f=WF
    rmdisk -path="/home/jared/Desktop/prueba.dk"
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=19 -name=Nueva1
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=19 -name=Nueva2
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=150 -name=Nueva3 -type=E
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=61 -name=Nueva4 -type=P
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=40 -name=Nueva5 -type=L
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=40 -name=Nueva6 -type=L
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=40 -name=Nueva7 -type=L
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=20 -name=Nueva8 -type=L
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=3 -name=Nueva9 -type=L -f=WF
    fdisk -path="/home/jared/Desktop/prueba.dk" -size=3 -name=Nueva10 -type=L -f=BF
    fdisk -path="/home/jared/Desktop/prueba.dk" -name=Nueva1 -delete=full
*/

    string p="------------------------------Ingrese un comando------------------------------\n";



        QTextStream qtin(stdin);
        QString line;

        while(line!="salir"){
            cout << p;
            line = qtin.readLine();
            if(line!="ver" && line!="salir"){
                if(line.isEmpty()==false){
                    YY_BUFFER_STATE buffer = yy_scan_string(line.toUtf8().constData());
                    linea = 0;
                    columna = 0;
                    yylineno = 0;

                    if(yyparse()==0){
                        printf("\n\n\n");
                    }else {
                        printf("\n\nExisten errores de Compilacion\n\n");
                    }

                }
            }if(line == "salir" || line == "\n"){

            }else{
                FILE *archivo=fopen("/home/jared/Desktop/prueba.dk","rb+");
                mbr prueba;
                fseek(archivo, 0, SEEK_SET);
                fread(&prueba, sizeof(mbr), 1, archivo);
                fclose(archivo);

                cout << "\n----------DATOS DEL DISCO-----\n";
                cout << "MBR FIT: "<< prueba.disk_fit<<endl;
                cout << "MBR FECHA: "<< asctime(gmtime(&prueba.mbr_creacion));
                cout << "MBR SIZE: "<< prueba.mbr_size<<endl;
                cout << "\n----------DATOS DE LA PARTICION 1-----\n";
                cout << "Fit: "<< prueba.particion1.part_fit<<endl;
                cout << "Nombre: "<< prueba.particion1.part_name<<endl;
                cout << "Size: "<< prueba.particion1.part_size<<endl;
                cout << "Start: "<< prueba.particion1.part_start<<endl;
                cout << "Status: "<< prueba.particion1.part_status<<endl;
                cout << "Type: "<< prueba.particion1.part_type<<endl;
                cout << "\n----------DATOS DE LA PARTICION 2-----\n";
                cout << "Fit: "<< prueba.particion2.part_fit<<endl;
                cout << "Nombre: "<< prueba.particion2.part_name<<endl;
                cout << "Size: "<< prueba.particion2.part_size<<endl;
                cout << "Start: "<< prueba.particion2.part_start<<endl;
                cout << "Status: "<< prueba.particion2.part_status<<endl;
                cout << "Type: "<< prueba.particion2.part_type<<endl;
                cout << "\n----------DATOS DE LA PARTICION 3-----\n";
                cout << "Fit: "<< prueba.particion3.part_fit<<endl;
                cout << "Nombre: "<< prueba.particion3.part_name<<endl;
                cout << "Size: "<< prueba.particion3.part_size<<endl;
                cout << "Start: "<< prueba.particion3.part_start<<endl;
                cout << "Status: "<< prueba.particion3.part_status<<endl;
                cout << "Type: "<< prueba.particion3.part_type<<endl;
                cout << "\n----------DATOS DE LA PARTICION 4-----\n";
                cout << "Fit: "<< prueba.particion4.part_fit<<endl;
                cout << "Nombre: "<< prueba.particion4.part_name<<endl;
                cout << "Size: "<< prueba.particion4.part_size<<endl;
                cout << "Start: "<< prueba.particion4.part_start<<endl;
                cout << "Status: "<< prueba.particion4.part_status<<endl;
                cout << "Type: "<< prueba.particion4.part_type<<endl;

                int i = 1;
                int posicion = 0;
                ebr pruebaEbr;
                archivo=fopen("/home/jared/Desktop/prueba.dk","rb+");
                fseek(archivo, prueba.particion3.part_start, SEEK_SET);
                fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                fclose(archivo);
                cout << "\n----------DATOS DE LA PARTICION EXTENDIDA #1-----\n";
                cout << "Fit: "<< pruebaEbr.part_fit<<endl;
                cout << "Nombre: "<< pruebaEbr.part_name<<endl;
                cout << "Size: "<< pruebaEbr.part_size<<endl;
                cout << "Start: "<< pruebaEbr.part_start<<endl;
                cout << "Status: "<< pruebaEbr.part_status<<endl;
                cout << "Siguiente: "<< pruebaEbr.part_next<<endl;
                i++;

                while(pruebaEbr.part_next > 0){
                    posicion = pruebaEbr.part_next;
                    archivo=fopen("/home/jared/Desktop/prueba.dk","rb+");
                    fseek(archivo, posicion, SEEK_SET);
                    fread(&pruebaEbr, sizeof(mbr), 1, archivo);
                    fclose(archivo);
                    cout << "\n----------DATOS DE LA PARTICION EXTENDIDA #"<<i<<"-----\n";
                    cout << "Fit: "<< pruebaEbr.part_fit<<endl;
                    cout << "Nombre: "<< pruebaEbr.part_name<<endl;
                    cout << "Size: "<< pruebaEbr.part_size<<endl;
                    cout << "Start: "<< pruebaEbr.part_start<<endl;
                    cout << "Status: "<< pruebaEbr.part_status<<endl;
                    cout << "Siguiente: "<< pruebaEbr.part_next<<endl;
                    i++;
                }
            }

        }

    return 0;
}
