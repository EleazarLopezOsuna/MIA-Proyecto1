#include <QCoreApplication>
#include "iostream"
#include <QString>
#include <parser.h>
#include <scanner.h>
#include <QTextStream>
#include <structsreportes.h>
#include <fstream>
using namespace std;

int p;
extern int linea;
extern int columna;
extern int yylineno;

int main(int argc, char *argv[])
{
/*
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
    exec -path="/home/jared/Desktop/archivoPrueba.dk"
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

                    }

                }


    return 0;
}
