%{
#include "scanner.h"//se importa el header del analisis sintactico
#include <QString>
#include <string>
#include "qdebug.h"
#include <iostream>
#include "obmkdisk.h"
using namespace std;
extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON

int yyerror(const char* mens)
{
    std::cout << mens <<" "<<yytext<< std::endl;
    return 0;
}
%}

//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%defines "parser.h"
%output "parser.cpp"
%error-verbose
%locations
%union{
    char TEXT[256];
    class cat *cat_comm;
    class chgrp *chgrp_comm;
    class chown *chown_comm;
    class cp *cp_comm;
    class edit *edit_comm;
    class exec *exec_comm;
    class fdisk *fdisk_comm;
    class find *find_comm;
    class login *login_comm;
    class logout *logout_comm;
    class loss *loss_comm;
    class mkdir *mkdir_comm;
    class mkdisk *mkdisk_comm;
    class mkfile *mkfile_comm;
    class mkfs *mkfs_comm;
    class mkgrp *mkgrp_comm;
    class mkusr *mkusr_comm;
    class mount *mount_comm;
    class mv *mv_comm;
    class pause *pause_comm;
    class recovery *recovery_comm;
    class rem *rem_comm;
    class ren *ren_comm;
    class rmdisk *rmdisk_comm;
    class rmgrp *rmgrp_comm;
    class rmusr *rmusr_comm;
    class unmount *unmount_comm;

}
//TERMINALES DE TIPO TEXT, SON STRINGS

%token<TEXT> psize;
%token<TEXT> pmkdisk;
%token<TEXT> pmkdir;
%token<TEXT> punto;
%token<TEXT> bracketabre;
%token<TEXT> bracketcierra;
%token<TEXT> corcheteabre;
%token<TEXT> corchetecierra;
%token<TEXT> puntocoma;
%token<TEXT> potencia;
%token<TEXT> coma;
%token<TEXT> parentesisabre;
%token<TEXT> parentesiscierra;

%token<TEXT> llaveabre;
%token<TEXT> llavecierra;
%token<TEXT> mas;
%token<TEXT> menos;
%token<TEXT> multiplicacion;
%token<TEXT> igual;
%token<TEXT> dolar;
%token<TEXT> dospuntos;
//%token<TEXT> barra;

%token<TEXT> entero;
%token<TEXT> numnegativo;
%token<TEXT> cadena;
%token<TEXT> identificador;
%token<TEXT> caracter;
%token<TEXT> ruta;
%token<TEXT> rutacualquiera;
//%token<TEXT> pdisk;




%type<mdisk> COMANDOMKDISK; // lista de instrucciones

%left suma menos
%left multi division
%left potencia
%start INICIO
%%

INICIO : LEXPA { }
;

LEXPA:  pmkdisk COMANDOMKDISK
{


$2->mostrardatos($2);//ejecuto el metodo "mostrardatos" del objeto retornado en COMANDOMKDISK
printf("estoy en lexpa primera produccion");
}


;

COMANDOMKDISK:
menos psize igual entero {int tam=atoi($4); obmkdisk *disco=new obmkdisk(); disco->size=tam;  $$=disco;}
;
