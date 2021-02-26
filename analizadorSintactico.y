%{
#include "scanner.h"
#include <QString>
#include <string>
#include "qdebug.h"
#include <iostream>
#include "cm_cat.h"
#include "cm_chgrp.h"
#include "cm_chmod.h"
#include "cm_chown.h"
#include "cm_cp.h"
#include "cm_edit.h"
#include "cm_exec.h"
#include "cm_fdisk.h"
#include "cm_find.h"
#include "cm_login.h"
#include "cm_logout.h"
#include "cm_loss.h"
#include "cm_mkdir.h"
#include "cm_mkdisk.h"
#include "cm_mkfile.h"
#include "cm_mkfs.h"
#include "cm_mkgrp.h"
#include "cm_mkusr.h"
#include "cm_mount.h"
#include "cm_mv.h"
#include "cm_pause.h"
#include "cm_recovery.h"
#include "cm_rem.h"
#include "cm_ren.h"
#include "cm_rep.h"
#include "cm_rmdisk.h"
#include "cm_rmgrp.h"
#include "cm_rmusr.h"
#include "cm_unmount.h"
#include "structsreportes.h"
#include <string>
#include <iostream>

using namespace std;
extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
cm_cat *n_cat = new cm_cat(); //Estructura finalizada
cm_chgrp *n_chgrp = new cm_chgrp(); //Estructura finalizada
cm_chmod *n_chmod = new cm_chmod(); //Estructura finalizada
cm_chown *n_chown = new cm_chown(); //Estructura finalizada
cm_cp *n_cp = new cm_cp(); //Estructura finalizada
cm_edit *n_edit = new cm_edit(); //Estructura finalizada
cm_exec *n_exec = new cm_exec(); //Estructura finalizada
cm_fdisk *n_fdisk = new cm_fdisk(); //Estructura finalizada
cm_find *n_find = new cm_find(); //Estructura finalizada
cm_login *n_login = new cm_login(); //Estructura finalizada
cm_logout *n_logout = new cm_logout(); //Estructura finalizada
cm_loss *n_loss = new cm_loss(); //Estructura finalizada
cm_mkdir *n_mkdir = new cm_mkdir(); //Estructura finalizada
cm_mkdisk *n_mkdisk = new cm_mkdisk(); //Estructura finalizada
cm_mkfile *n_mkfile = new cm_mkfile(); //Estructura finalizada
cm_mkfs *n_mkfs = new cm_mkfs(); //Estructura finalizada
cm_mkgrp *n_mkgrp = new cm_mkgrp(); //Estructura finalizada
cm_mkusr *n_mkusr = new cm_mkusr(); //Estructura finalizada
cm_mount *n_mount = new cm_mount(); //Estructura finalizada
cm_mv *n_mv = new cm_mv(); //Estructura finalizada
cm_pause *n_pause = new cm_pause(); //Estructura finalizada
cm_recovery *n_recovery = new cm_recovery(); //Archivo completo
cm_rem *n_rem = new cm_rem(); //Archivo completo
cm_ren *n_ren = new cm_ren(); //Archivo completo
cm_rep *n_rep = new cm_rep(); //Archivo completo
cm_rmdisk *n_rmdisk = new cm_rmdisk(); //Archivo completo
cm_rmgrp *n_rmgrp = new cm_rmgrp(); //Archivo completo
cm_rmusr *n_rmusr = new cm_rmusr(); //Archivo completo
cm_unmount *n_unmount = new cm_unmount(); //Archivo completo

int yyerror(const char* mens)
{
    std::cout << mens <<" "<<yytext<< std::endl;
    return 0;
}
%}

//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%defines "parser.h"
%output "parser.cpp"
%define parse.error verbose
%locations
%union{
    char TEXT[256];
    char CARACTER;
    int NUMERO;
    class cm_cat *cat_comm;
    class cm_chgrp *chgrp_comm;
    class cm_chmod *chmod_comm;
    class cm_chown *chown_comm;
    class cm_cp *cp_comm;
    class cm_edit *edit_comm;
    class cm_exec *exec_comm;
    class cm_fdisk *fdisk_comm;
    class cm_find *findcl_comm;
    class cm_login *login_comm;
    class cm_logout *logout_comm;
    class cm_loss *loss_comm;
    class cm_mkdir *mkdir_comm;
    class cm_mkdisk *mkdisk_comm;
    class cm_mkfile *mkfile_comm;
    class cm_mkfs *mkfs_comm;
    class cm_mkgrp *mkgrp_comm;
    class cm_mkusr *mkusr_comm;
    class cm_mount *mount_comm;
    class cm_mv *mv_comm;
    class cm_pause *pause_comm;
    class cm_recovery *recovery_comm;
    class cm_rem *rem_comm;
    class cm_ren *ren_comm;
    class cm_rep *rep_comm;
    class cm_rmdisk *rmdisk_comm;
    class cm_rmgrp *rmgrp_comm;
    class cm_rmusr *rmusr_comm;
    class cm_unmount *unmount_comm;
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
%token<TEXT> res_ff;
%token<TEXT> res_wf;
%token<TEXT> res_b;
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

//Manejo de simbolos
%token<TEXT> igual;
%token<TEXT> uno;
%token<TEXT> unoMas;

%type<cat_comm> COMANDO_CAT;
%type<chgrp_comm> COMANDO_CHGRP;
%type<chmod_comm> COMANDO_CHMOD;
%type<chown_comm> COMANDO_CHOWN;
%type<cp_comm> COMANDO_CP;
%type<edit_comm> COMANDO_EDIT;
%type<exec_comm> COMANDO_EXEC;
%type<fdisk_comm> COMANDO_FDISK;
%type<findcl_comm> COMANDO_FIND;
%type<login_comm> COMANDO_LOGIN;
%type<logout_comm> COMANDO_LOGOUT;
%type<loss_comm> COMANDO_LOSS;
%type<mkdir_comm> COMANDO_MKDIR;
%type<mkdisk_comm> COMANDO_MKDISK;
%type<mkfile_comm> COMANDO_MKFILE;
%type<mkfs_comm> COMANDO_MKFS;
%type<mkgrp_comm> COMANDO_MKGRP;
%type<mkusr_comm> COMANDO_MKUSR;
%type<mount_comm> COMANDO_MOUNT;
%type<mv_comm> COMANDO_MV;
%type<pause_comm> COMANDO_PAUSE;
%type<recovery_comm> COMANDO_RECOVERY;
%type<rem_comm> COMANDO_REM;
%type<ren_comm> COMANDO_REN;
%type<rep_comm> COMANDO_REP;
%type<rmdisk_comm> COMANDO_RMDISK;
%type<rmgrp_comm> COMANDO_RMGRP;
%type<rmusr_comm> COMANDO_RMUSR;
%type<unmount_comm> COMANDO_UNMOUNT;

%type<CARACTER> VALOR_U;
%type<CARACTER> VALOR_F;
%type<CARACTER> VALOR_TYPE;
%type<CARACTER> VALOR_DELETE;
%type<NUMERO> VALOR_NAME;

%start COMANDOS
%%

COMANDOS: { n_cat = new cm_cat(); } COMANDO_CAT { n_cat->ejecutar(); }
    | { n_chgrp = new cm_chgrp(); } COMANDO_CHGRP { n_chgrp->ejecutar(); }
    | { n_chmod = new cm_chmod(); } COMANDO_CHMOD { n_chmod->ejecutar(); }
    | { n_chown = new cm_chown(); } COMANDO_CHOWN { n_chown->ejecutar(); }
    | { n_cp = new cm_cp(); } COMANDO_CP { n_cp->ejecutar(); }
    | { n_edit = new cm_edit(); } COMANDO_EDIT { n_edit->ejecutar(); }
    | { n_exec = new cm_exec(); } COMANDO_EXEC { n_exec->ejecutar(); }
    | { n_fdisk = new cm_fdisk(); } COMANDO_FDISK { n_fdisk->ejecutar(); }
    | { n_find = new cm_find(); } COMANDO_FIND { n_find->ejecutar(); }
    | { n_login = new cm_login(); } COMANDO_LOGIN { n_login->ejecutar(); }
    | { n_logout = new cm_logout(); } COMANDO_LOGOUT { n_logout->ejecutar(); }
    | { n_loss = new cm_loss(); } COMANDO_LOSS { n_loss->ejecutar(); }
    | { n_mkdir = new cm_mkdir(); } COMANDO_MKDIR { n_mkdir->ejecutar(); }
    | { n_mkdisk = new cm_mkdisk(); } COMANDO_MKDISK { n_mkdisk->ejecutar(); }
    | { n_mkfile = new cm_mkfile(); } COMANDO_MKFILE { n_mkfile->ejecutar(); }
    | { n_mkfs = new cm_mkfs(); } COMANDO_MKFS { n_mkfs->ejecutar(); }
    | { n_mkgrp = new cm_mkgrp(); } COMANDO_MKGRP { n_mkgrp->ejecutar(); }
    | { n_mkusr = new cm_mkusr(); } COMANDO_MKUSR { n_mkusr->ejecutar(); }
    | { n_mount = new cm_mount(); } COMANDO_MOUNT { n_mount->ejecutar(); }
    | { n_mv = new cm_mv(); } COMANDO_MV { n_mv->ejecutar(); }
    | { n_pause = new cm_pause(); }COMANDO_PAUSE { n_pause->ejecutar(); }
    | { n_recovery = new cm_recovery(); } COMANDO_RECOVERY { n_recovery->ejecutar(); }
    | { n_rem = new cm_rem(); } COMANDO_REM { n_rem->ejecutar(); }
    | { n_ren = new cm_ren(); } COMANDO_REN { n_ren->ejecutar(); }
    | { n_rep = new cm_rep(); } COMANDO_REP { n_rep->ejecutar(); }
    | { n_rmdisk = new cm_rmdisk(); } COMANDO_RMDISK { n_rmdisk->ejecutar(); }
    | { n_rmgrp = new cm_rmgrp(); } COMANDO_RMGRP { n_rmgrp->ejecutar(); }
    | { n_rmusr = new cm_rmusr(); } COMANDO_RMUSR { n_rmusr->ejecutar(); }
    | { n_unmount = new cm_unmount(); } COMANDO_UNMOUNT { n_unmount->ejecutar(); }
    ;

COMANDO_CAT: res_cat res_filen igual cadena RECURSIVIDAD_FILEN {
        filen* nuevo = new filen();
        nuevo->path = $4;
        n_cat->insertar(nuevo);
        $$ = n_cat;
    }
    ;

RECURSIVIDAD_FILEN: res_filen igual cadena RECURSIVIDAD_FILEN{
        filen* nuevo = new filen();
        nuevo->path = $3;
        n_cat->insertar(nuevo);
    }
    |{}
    ;

COMANDO_CHGRP: res_chgrp ATRIBUTOS_CHGRP
{
    $$ = n_chgrp;
}
    ;

ATRIBUTOS_CHGRP: res_usr igual cadena ATRIBUTOS_CHGRP
{
    strncpy(n_chgrp->usr, $3, 10);
}
    | res_grp igual cadena ATRIBUTOS_CHGRP
{
    strncpy(n_chgrp->grp, $3, 10);
}
    |{}
    ;

COMANDO_CHMOD: res_chmod ATRIBUTOS_CHMOD
{
    $$ = n_chmod;
}
    ;

ATRIBUTOS_CHMOD: res_path igual cadena ATRIBUTOS_CHMOD
{
    n_chmod->path = $3;
}
    | res_ugo igual entero ATRIBUTOS_CHMOD
{
    int total = atoi($3);
    int u = total/100;
    total = total - (u*100);
    int g = total/10;
    total = total - (g*10);
    int o = total;

    n_chmod->g = g;
    n_chmod->u = u;
    n_chmod->o = o;
}
    | res_r ATRIBUTOS_CHMOD
{
    n_chmod->r = true;
}
    |{}
    ;

COMANDO_CHOWN: res_chown ATRIBUTOS_CHOWN
{
    $$ = n_chown;
}
    ;

ATRIBUTOS_CHOWN: res_path igual cadena ATRIBUTOS_CHOWN
{
    n_chown->path = $3;
}
    | res_usr igual cadena ATRIBUTOS_CHOWN
{
    strncpy(n_chown->usr, $3, 10);
}
    | res_r ATRIBUTOS_CHOWN
{
    n_chown->r = true;
}
    |{}
    ;

COMANDO_CP: res_cp ATRIBUTOS_CP
{
    $$ = n_cp;
}
    ;

ATRIBUTOS_CP: res_path igual cadena ATRIBUTOS_CP
{
    n_cp->path = $3;
}
    | res_dest igual cadena ATRIBUTOS_CP
{
    n_cp->dest = $3;
}
    |{}
    ;

COMANDO_EDIT: res_edit ATRIBUTOS_EDIT
{
    $$ = n_edit;
}
    ;

ATRIBUTOS_EDIT: res_path igual cadena ATRIBUTOS_EDIT
{
    n_edit->path = $3;
}
    | res_cont igual cadena ATRIBUTOS_EDIT
{
    n_edit->cont = $3;
}
    |{}
    ;

COMANDO_EXEC: res_exec res_path igual cadena
{
    n_exec->path = $4;
    $$ = n_exec;
}
    ;

COMANDO_FDISK: res_fdisk ATRIBUTOS_FDISK
{
    $$ = n_fdisk;
}
    ;

ATRIBUTOS_FDISK: res_size igual entero ATRIBUTOS_FDISK
{
    n_fdisk->size = atoi($3);
}
    | res_path igual cadena ATRIBUTOS_FDISK
{
    n_fdisk->path = $3;
}
    | res_name igual cadena ATRIBUTOS_FDISK
{
    strncpy(n_fdisk->name, $3, 16);
}
    | res_u igual VALOR_U ATRIBUTOS_FDISK
{
    n_fdisk->u = $3;
}
    | res_type igual VALOR_TYPE ATRIBUTOS_FDISK
{
    n_fdisk->type = $3;
}
    | res_f igual VALOR_F ATRIBUTOS_FDISK
{
    n_fdisk->f = $3;
}
    | res_delete igual VALOR_DELETE ATRIBUTOS_FDISK
{
    n_fdisk->borrar = true;
    n_fdisk->tipo_borrar = $3;
}
    | res_add igual entero ATRIBUTOS_FDISK
{
    n_fdisk->agregar = true;
}
    |{}
    ;

VALOR_U: res_b { $$ = 'B'; }
    | res_k { $$ = 'K'; }
    | res_m { $$ = 'M'; }
    ;

VALOR_TYPE: res_p { $$ = 'P'; }
    | res_e { $$ = 'E'; }
    | res_l { $$ = 'L'; }
    ;

VALOR_F: res_bf { $$ = 'B'; }
    | res_ff { $$ = 'F'; }
    | res_wf { $$ = 'W'; }
    ;

VALOR_DELETE: res_fast{ $$ = 'R'; }
    | res_full{ $$ = 'F'; }
    ;

COMANDO_FIND: res_find ATRIBUTOS_FIND
{
    $$ = n_find;
}
    ;

ATRIBUTOS_FIND: res_path igual cadena ATRIBUTOS_FIND
{
    n_find->path = $3;
}
    | res_name igual cadena ATRIBUTOS_FIND
{
    strncpy(n_find->name, $3, 10);
}
    |{}
    ;

COMANDO_LOGIN: res_login ATRIBUTOS_LOGIN
{
    $$ = n_login;
}
    ;

ATRIBUTOS_LOGIN: res_usr igual cadena ATRIBUTOS_LOGIN
{
    strncpy(n_login->usr, $3, 10);
}
    | res_pwd igual cadena ATRIBUTOS_LOGIN
{
    strncpy(n_login->pwd, $3, 10);
}
    | res_id igual cadena ATRIBUTOS_LOGIN
{
    strncpy(n_login->id, $3, 10);
}
    |{}
    ;

COMANDO_LOGOUT: res_logout
{
    $$ = n_logout;
}
    ;

COMANDO_LOSS: res_loss res_id igual cadena
{
    $$ = n_loss;
}
    ;

COMANDO_MKDIR: res_mkdir ATRIBUTOS_MKDIR
{
    $$ = n_mkdir;
}
    ;

ATRIBUTOS_MKDIR: res_path igual cadena ATRIBUTOS_MKDIR
    | res_p ATRIBUTOS_MKDIR
    |{}
    ;

COMANDO_MKDISK: res_mkdisk ATRIBUTOS_MKDISK
{
    $$ = n_mkdisk;
}
    ;

ATRIBUTOS_MKDISK: res_size igual entero ATRIBUTOS_MKDISK
{
    n_mkdisk->size = atoi($3);
}
    | res_path igual cadena ATRIBUTOS_MKDISK
{
    n_mkdisk->path = $3;
}
    | res_u igual VALOR_U ATRIBUTOS_MKDISK
{
    n_mkdisk->u = $3;
}
    | res_f igual VALOR_F ATRIBUTOS_MKDISK
{
    n_mkdisk->f = $3;
}
    |{}
    ;

COMANDO_MKFILE: res_mkfile ATRIBUTOS_MKFILE
{
    $$ = n_mkfile;
}
    ;

ATRIBUTOS_MKFILE: res_path igual cadena ATRIBUTOS_MKFILE
{
    n_mkfile->path = $3;
}
    | res_p ATRIBUTOS_MKFILE
{
    n_mkfile->p = true;
}
    | res_size igual entero ATRIBUTOS_MKFILE
{
    n_mkfile->size = atoi($3);
}
    | res_cont igual cadena ATRIBUTOS_MKFILE
{
    n_mkfile->cont = $3;
}
    |{}
    ;

COMANDO_MKFS: res_mkfs ATRIBUTOS_MKFS
{
    $$ = n_mkfs;
}
    ;

ATRIBUTOS_MKFS: res_id igual cadena ATRIBUTOS_MKFS
{
    strncpy(n_mkfs->id, $3, 10);
}
    | res_2fs ATRIBUTOS_MKFS
{
    n_mkfs->fs2 = true;
    n_mkfs->fs3 = false;
}
    | res_3fs ATRIBUTOS_MKFS
{
    n_mkfs->fs3 = true;
    n_mkfs->fs2 = false;
}
    | res_type igual VALOR_DELETE
{
    n_mkfs->type = $3;
}
    |{}
    ;

COMANDO_MKGRP: res_mkgrp res_name igual cadena
{
    strncpy(n_mkgrp->name, $4, 10);
    $$ = n_mkgrp;
}
    ;

COMANDO_MKUSR: res_mkusr ATRIBUTOS_MKUSR
{
    $$ = n_mkusr;
}
    ;

ATRIBUTOS_MKUSR: res_usr igual cadena ATRIBUTOS_MKUSR
{
    strncpy(n_mkusr->usr, $3, 10);
}
    | res_pwd igual cadena ATRIBUTOS_MKUSR
{
    strncpy(n_mkusr->pwd, $3, 10);
}
    | res_grp igual cadena ATRIBUTOS_MKUSR
{
    strncpy(n_mkusr->grp, $3, 10);
}
    |{}
    ;

COMANDO_MOUNT: res_mount ATRIBUTOS_MOUNT
{
    $$ = n_mount;
}
    ;

ATRIBUTOS_MOUNT: res_path igual cadena ATRIBUTOS_MOUNT
{
    n_mount->path = $3;
}
    | res_name igual cadena ATRIBUTOS_MOUNT
{
    strncpy(n_mount->name, $3, 10);
}
    |{}
    ;

COMANDO_MV: res_mv ATRIBUTOS_MV
{
    $$ = n_mv;
}
    ;

ATRIBUTOS_MV: res_path igual cadena ATRIBUTOS_MV
{
    n_mv->path = $3;
}
    | res_dest igual cadena ATRIBUTOS_MV
{
    n_mv->dest = $3;
}
    |{}
    ;

COMANDO_PAUSE: res_pause
{
    $$ = n_pause;
}
    ;

COMANDO_RECOVERY: res_recovery res_id igual cadena
{
    strncpy(n_recovery->id, $4, 10);
    $$ = n_recovery;
}
    ;

COMANDO_REM: res_rem res_path igual cadena
{
    n_rem->path = $3;
    $$ = n_rem;
}
    ;

COMANDO_REN: res_ren ATRIBUTOS_REN
{
    $$ = n_ren;
}
    ;

ATRIBUTOS_REN: res_path igual cadena ATRIBUTOS_REN
{
    n_ren->path = $3;
}
    | res_name igual cadena ATRIBUTOS_REN
{
    strncpy(n_ren->name, $3, 10);
}
    |{}
    ;

COMANDO_REP: res_rep ATRIBUTOS_REP
{
    $$ = n_rep;
}
    ;

ATRIBUTOS_REP: res_path igual cadena ATRIBUTOS_REP
{
    n_rep->path = $3;
}
    | res_name igual VALOR_NAME ATRIBUTOS_REP
{
    n_rep->name = $3;
}
    | res_id igual cadena ATRIBUTOS_REP
{
    strncpy(n_rep->id, $3, 10);
}
    | res_ruta igual cadena ATRIBUTOS_REP
{
    n_rep->ruta = $3;
}
    |{}
    ;

VALOR_NAME: res_mbr
{
    $$ = 1;
}
    | res_disk
{
    $$ = 2;
}
    | res_inode
{
    $$ = 3;
}
    | res_journaling
{
    $$ = 4;
}
    | res_block
{
    $$ = 5;
}
    | res_bm_inode
{
    $$ = 6;
}
    | res_bm_block
{
    $$ = 7;
}
    | res_tree
{
    $$ = 8;
}
    | res_sb
{
    $$ = 9;
}
    | res_file
{
    $$ = 10;
}
    | res_ls
{
    $$ = 11;
}
    ;

COMANDO_RMDISK: res_rmdisk res_path igual cadena
{
    n_rmdisk->path = $4;
    $$ = n_rmdisk;
}
    ;

COMANDO_RMGRP: res_rmgrp res_name igual cadena
{
    strncpy(n_rmgrp->name, $4, 10);
    $$ = n_rmgrp;
}
    ;

COMANDO_RMUSR: res_rmusr res_usr igual cadena
{
    strncpy(n_rmusr->usr, $4, 10);
    $$ = n_rmusr;
}
    ;

COMANDO_UNMOUNT: res_unmount res_id igual cadena
{
    strncpy(n_unmount->id, $4, 10);
    $$ = n_unmount;
}
    ;
