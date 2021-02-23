#include <QCoreApplication>
#include "iostream"
#include <QString>
#include <parser.h>
#include <scanner.h>
#include <QTextStream>
using namespace std;

int p;
extern int linea;
extern int columna;
extern int yylineno;

int main(int argc, char *argv[])
{
    /*cm_cat *cat = new cm_cat();

    filen* primero = new filen();
    filen* segundo = new filen();
    filen* tercero = new filen();

    primero->path = "1er path";
    segundo->path = "2do path";
    tercero->path = "3er path";

    cat->insertar(primero);
    cat->insertar(segundo);
    cat->insertar(tercero);
    cat->ejecutar();

    cat file1=Archivo1 file2=Archivo2
*/

    string p="------------------------------Ingrese un comando------------------------------\n";



        QTextStream qtin(stdin);
        QString line;

        while(line!="salir"){
            cout << p;
            line = qtin.readLine();
            if(line!="salir"){
                if(line.isEmpty()==false){
                    YY_BUFFER_STATE buffer = yy_scan_string(line.toUtf8().constData());
                    linea = 0;
                    columna = 0;
                    yylineno = 0;

                    if(yyparse()==0){
                        printf("\n\Comando ejecutado correctamente\n\n");
                    }else {
                        printf("\n\nhay errores\n\n");
                    }

                }
            }

        }

    return 0;
}
