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
    class chmod *chmod_comm; //Falta
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
    class rep *rep_comm; //Falta
    class rmdisk *rmdisk_comm;
    class rmgrp *rmgrp_comm;
    class rmusr *rmusr_comm;
    class unmount *unmount_comm;

}
//Manejo de comandos
%token<TEXT> res_mkdisk;
%token<TEXT> res_rmdisk;
%token<TEXT> res_fdisk;
%token<TEXT> res_mount;
%token<TEXT> res_unmount;
%token<TEXT> res_mkfs;
%token<TEXT> res_login;
%token<TEXT> res_logout;
%token<TEXT> res_mkgrp;
%token<TEXT> res_rmgrp;
%token<TEXT> res_mkusr;
%token<TEXT> res_rmusr;
%token<TEXT> res_chmod;
%token<TEXT> res_mkfile;
%token<TEXT> res_cat;
%token<TEXT> res_rem;
%token<TEXT> res_edit;
%token<TEXT> res_ren;
%token<TEXT> res_mkdir;
%token<TEXT> res_cp;
%token<TEXT> res_mv;
%token<TEXT> res_find;
%token<TEXT> res_chown;
%token<TEXT> res_chgrp;
%token<TEXT> res_pause;
%token<TEXT> res_recovery;
%token<TEXT> res_loss;
%token<TEXT> res_exec;
%token<TEXT> res_rep;

//Manejo de atributos
%token<TEXT> res_size;
%token<TEXT> res_path;
%token<TEXT> res_u;
%token<TEXT> res_f;
%token<TEXT> res_name;
%token<TEXT> res_type;
%token<TEXT> res_delete;
%token<TEXT> res_add;
%token<TEXT> res_id;
%token<TEXT> res_2fs;
%token<TEXT> res_3fs;
%token<TEXT> res_usr;
%token<TEXT> res_pwd;
%token<TEXT> res_grp;
%token<TEXT> res_ugo;
%token<TEXT> res_r;
%token<TEXT> res_p;
%token<TEXT> res_cont;
%token<TEXT> res_dest;
%token<TEXT> res_ruta;

//Manejo de valores para atributos
%token<TEXT> res_k;
%token<TEXT> res_m;
%token<TEXT> res_bf;
%token<TEXT> res_wf;
%token<TEXT> res_b;
%token<TEXT> res_p;
%token<TEXT> res_e;
%token<TEXT> res_l;
%token<TEXT> res_fast;
%token<TEXT> res_full;

//Manejo de opciones de reporte
%token<TEXT> res_mbr;
%token<TEXT> res_disk;
%token<TEXT> res_inode;
%token<TEXT> res_journaling;
%token<TEXT> res_block;
%token<TEXT> res_bm_inode;
%token<TEXT> res_bm_block;
%token<TEXT> res_tree;
%token<TEXT> res_sb;
%token<TEXT> res_file;
%token<TEXT> res_ls;
%token<TEXT> res_filen;

//Manejo de expresiones regulares
%token<TEXT> entero;
%token<TEXT> cadena;
\
//Manejo de simbolos
%token<TEXT> igual;
%token<TEXT> uno;
%token<TEXT> unoMas;

%type<cat_comm> COMANDO_CAT; //Produccion completa
%type<chgrp_comm> COMANDO_CHGRP; //Produccion completa
%type<chmod_comm> COMANDO_CHMOD; //Produccion completa
%type<chown_comm> COMANDO_CHOWN; //Produccion completa
%type<cp_comm> COMANDO_CP; //Produccion completa
%type<edit_comm> COMANDO_EDIT; //Produccion completa
%type<exec_comm> COMANDO_EXEC; //Produccion completa
%type<fdisk_comm> COMANDO_FDISK; //Produccion completa
%type<find_comm> COMANDO_FIND; //Produccion completa
%type<login_comm> COMANDO_LOGIN; //Produccion completa
%type<logout_comm> COMANDO_LOGOUT; //Produccion completa
%type<loss_comm> COMANDO_LOSS; //Produccion completa
%type<mkdir_comm> COMANDO_MKDIR; //Produccion completa
%type<mkdisk_comm> COMANDO_MKDISK; //Produccion completa
%type<mkfile_comm> COMANDO_MKFILE; //Produccion completa
%type<mkfs_comm> COMANDO_MKFS; //Produccion completa
%type<mkgrp_comm> COMANDO_MKGRP; //Produccion completa
%type<mkusr_comm> COMANDO_MKUSR; //Produccion completa
%type<mount_comm> COMANDO_MOUNT; //Produccion completa
%type<mv_comm> COMANDO_MV; //Produccion completa
%type<pause_comm> COMANDO_PAUSE; //Produccion completa
%type<recovery_comm> COMANDO_RECOVERY; //Produccion completa
%type<rem_comm> COMANDO_REM; //Produccion completa
%type<ren_comm> COMANDO_REN; //Produccion completa
%type<rep_comm> COMANDO_REP; //Produccion completa
%type<rmdisk_comm> COMANDO_RMDISK; //Produccion completa
%type<rmgrp_comm> COMANDO_RMGRP; //Produccion completa
%type<rmusr_comm> COMANDO_RMUSR; //Produccion completa
%type<unmount_comm> COMANDO_UNMOUNT; //Produccion completa

%start COMANDOS
%%

COMANDOS: res_cat COMANDO_CAT
    | res_chgrp COMANDO_CHGRP
    | res_chmod COMANDO_CHMOD
    | res_chown COMANDO_CHOWN
    | res_cp COMANDO_CP
    | res_edit COMANDO_EDIT
    | res_exec COMANDO_EXEC
    | res_fdisk COMANDO_FDISK
    | res_find COMANDO_FIND
    | res_login COMANDO_LOGIN
    | res_logout COMANDO_LOGOUT
    | res_loss COMANDO_LOSS
    | res_mkdir COMANDO_MKDIR
    | res_mkdisk COMANDO_MKDISK
    | res_mkfile COMANDO_MKFILE
    | res_mkfs COMANDO_MKFS
    | res_mkgrp COMANDO_MKGRP
    | res_mkusr COMANDO_MKUSR
    | res_mount COMANDO_MOUNT
    | res_mv COMANDO_MV
    | res_pause COMANDO_PAUSE
    | res_recovery COMANDO_RECOVERY
    | res_rem COMANDO_REM
    | res_ren COMANDO_REN
    | res_rep COMANDO_REP
    | res_rmdisk COMANDO_RMDISK
    | res_rmgrp COMANDO_RMGRP
    | res_rmusr COMANDO_RMUSR
    | res_unmount COMANDO_UNMOUNT
    ;

COMANDO_CAT: res_filen igual cadena RECURSIVIDAD_FILEN
    ;

RECURSIVIDAD_FILEN: res_filen igual cadena RECURSIVIDAD_FILEN
    |
    ;

COMANDO_CHGRP: res_chgrp ATRIBUTOS_CHGRP
    ;

ATRIBUTOS_CHGRP: res_usr igual cadena ATRIBUTOS_CHGRP
    | res_grp igual cadena ATRIBUTOS_CHGRP
    |
    ;

COMANDO_CHMOD: res_chmod ATRIBUTOS_CHMOD
    ;

ATRIBUTOS_CHMOD: res_path igual cadena ATRIBUTOS_CHMOD
    | res_ugo igual entero ATRIBUTOS_CHMOD
    | res_r ATRIBUTOS_CHMOD
    |
    ;

COMANDO_CHOWN: res_chown ATRIBUTOS_CHOWN
    ;

ATRIBUTOS_CHOWN: res_path igual cadena ATRIBUTOS_CHOWN
    | res_usr igual cadena ATRIBUTOS_CHOWN
    | res_r ATRIBUTOS_CHOWN
    |
    ;

COMANDO_CP: res_cp ATRIBUTOS_CP
    ;

ATRIBUTOS_CP: res_path igual cadena ATRIBUTOS_CP
    | res_dest igual cadena ATRIBUTOS_CP
    |
    ;

COMANDO_EDIT: res_edit ATRIBUTOS_EDIT
    ;

ATRIBUTOS_EDIT: res_path igual cadena ATRIBUTOS_EDIT
    | res_cont igual cadena ATRIBUTOS_EDIT
    |
    ;

COMANDO_EXEC: res_exec res_path igual cadena
    ;

COMANDO_FDISK: res_fdisk ATRIBUTOS_FDISK
    ;

ATRIBUTOS_FDISK: res_size igual entero ATRIBUTOS_FDISK
    | res_path igual cadena ATRIBUTOS_FDISK
    | res_name igual cadena ATRIBUTOS_FDISK
    | res_u igual VALOR_U ATRIBUTOS_FDISK
    | res_type igual VALOR_TYPE ATRIBUTOS_FDISK
    | res_f igual VALOR_F ATRIBUTOS_FDISK
    | res_delete igual VALOR_DELETE ATRIBUTOS_FDISK
    | res_add igual entero ATRIBUTOS_FDISK
    |
    ;

VALOR_U: res_b
    | res_k
    | res_m
    ;

VALOR_TYPE: res_p
    | res_e
    | res_l
    ;

VALOR_F: res_bf
    | res_ff
    | res_wf
    ;

VALOR_DELETE: res_fast
    | res_full
    ;

COMANDO_FIND: res_find ATRIBUTOS_FIND
    ;

ATRIBUTOS_FIND: res_path igual cadena ATRIBUTOS_FIND
    | res_name igual cadena ATRIBUTOS_FIND
    |
    ;

COMANDO_LOGIN: res_login ATRIBUTOS_LOGIN
    ;

ATRIBUTOS_LOGIN: res_usr igual cadena ATRIBUTOS_LOGIN
    | res_pwd igual cadena ATRIBUTOS_LOGIN
    | res_id igual cadena ATRIBUTOS_LOGIN
    |
    ;

COMANDO_LOGOUT: res_logout
    ;

COMANDO_LOSS: res_loss res_id igual cadena
    ;

COMANDO_MKDIR: res_mkdir ATRIBUTOS_MKDIR
    ;

ATRIBUTOS_MKDIR: res_path igual cadena ATRIBUTOS_MKDIR
    | res_p ATRIBUTOS_MKDIR
    |
    ;

COMANDO_MKDISK: res_mkdisk ATRIBUTOS_MKDISK
    ;

ATRIBUTOS_MKDISK: res_size igual entero ATRIBUTOS_MKDISK
    | res_path igual cadena ATRIBUTOS_MKDISK
    | res_u igual VALOR_U ATRIBUTOS_MKDISK
    | res_f igual VALOR_F ATRIBUTOS_MKDISK
    |
    ;

COMANDO_MKFILE: res_mkfile ATRIBUTOS_MKFILE
    ;

ATRIBUTOS_MKFILE: res_path igual cadena ATRIBUTOS_MKFILE
    | res_p ATRIBUTOS_MKFILE
    | res_size igual entero ATRIBUTOS_MKFILE
    | res_cont igual cadena ATRIBUTOS_MKFILE
    |
    ;

COMANDO_MKFS: res_mkfs ATRIBUTOS_MKFS
    ;

ATRIBUTOS_MKFS: res_id igual cadena ATRIBUTOS_MKFS
    | res_path igual cadena ATRIBUTOS_MKFS
    | res_2fs ATRIBUTOS_MKFS
    | res_3fs ATRIBUTOS_MKFS
    |
    ;

COMANDO_MKGRP: res_mkgrp res_name igual cadena
    ;

COMANDO_MKUSR: res_mkusr ATRIBUTOS_MKUSR
    ;

ATRIBUTOS_MKUSR: res_usr igual cadena ATRIBUTOS_MKUSR
    | res_pwd igual cadena ATRIBUTOS_MKUSR
    | res_grp igual cadena ATRIBUTOS_MKUSR
    |
    ;

COMANDO_MOUNT: res_mount ATRIBUTOS_MOUNT
    ;

ATRIBUTOS_MOUNT: res_path igual cadena ATRIBUTOS_MOUNT
    | res_name igual cadena ATRIBUTOS_MOUNT
    |
    ;

COMANDO_MV: res_mv ATRIBUTOS_MV
    ;

ATRIBUTOS_MV: res_path igual cadena ATRIBUTOS_MV
    | res_dest igual cadena ATRIBUTOS_MV
    |
    ;

COMANDO_PAUSE: res_pause
    ;

COMANDO_RECOVERY: res_recovery res_id igual cadena
    ;

COMANDO_REM: res_rem res_path igual cadena
    ;

COMANDO_REN: res_ren ATRIBUTOS_REN
    ;

ATRIBUTOS_REN: res_path igual cadena ATRIBUTOS_REN
    | res_name igual cadena ATRIBUTOS_REN
    |
    ;

COMANDO_REP: res_rep ATRIBUTOS_REP
    ;

ATRIBUTOS_REP: res_path igual cadena ATRIBUTOS_REP
    | res_name igual VALOR_NAME ATRIBUTOS_REP
    | res_id igual cadena ATRIBUTOS_REP
    | res_ruta igual cadena ATRIBUTOS_REP
    |
    ;

VALOR_NAME: res_mbr
    | res_disk
    | res_inode
    | res_journaling
    | res_block
    | res_bm_inode
    | res_bm_block
    | res_tree
    | res_sb
    | res_file
    | res_ls
    ;

COMANDO_RMDISK: res_rmdisk res_path igual cadena
    ;

COMANDO_RMGRP: res_rmgrp res_name igual cadena
    ;

COMANDO_RMUSR: res_rmusr res_usr igual cadena
    ;

COMANDO_UNMOUNT: res_unmount res_id igual cadena
    ;
































