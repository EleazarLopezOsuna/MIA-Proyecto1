%option case-insensitive
%option yylineno

%{
#include <iostream>
#include <QString>
#include "parser.h"

#include <string>
#include <QList>

    int yylex();
    void yyerror(const char *s);
    int linea = 0;
    int columna = 1;
    int anterior = 0;


%}
%option noyywrap
%option nounput

entero [0-9]
filen "FILE"{entero}+
letra [a-zA-ZÑñáéíóúÁÉÍÓÚ]
identificador {letra}({letra}|{entero}|"_")*
caracter "\'"("\\")?({letra}|{entero})"\'"
cadena [\"][^\"\/]*[\"]
rutita "\/"{identificador}
ruta {rutita}+


%x COM


%%
"MKDISK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkdisk;}
"RMDISK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_rmdisk;}
"FDISK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_fdisk;}
"MOUNT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mount;}
"UNMOUNT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_unmount;}
"MKFS" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkfs;}
"LOGIN" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_login;}
"LOGOUT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_logout;}
"MKGRP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkgrp;}
"RMGRP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_rmgrp;}
"MKUSR" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkusr;}
"RMUSR" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_rmusr;}
"CHMOD" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_chmod;}
"MKFILE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkfile;}
"CAT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_cat;}
"REM" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_rem;}
"EDIT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_edit;}
"REN" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_ren;}
"MKDIR" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mkdir;}
"CP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_cp;}
"MV" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mv;}
"FIND" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_find;}
"CHOWN" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_chown;}
"CHGRP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_chgrp;}
"PAUSE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_pause;}
"RECOVERY" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_recovery;}
"LOSS" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_loss;}
"EXEC" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_exec;}
"REP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_rep;}


"-SIZE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_size;}
"-PATH" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_path;}
"-U" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_u;}
"-F" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_f;}
"-NAME" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_name;}
"-TYPE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_type;}
"-DELETE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_delete;}
"-ADD" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_add;}
"-ID" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_id;}
"-2FS" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_2fs;}
"-3FS" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_3fs;}
"-USR" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_usr;}
"-PWD" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_pwd;}
"-GRP" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_grp;}
"-UGO" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_ugo;}
"-R" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_r;}
"-P" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_p;}
"-CONT" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_cont;}
"-DEST" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_dest;}
"-RUTA" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_ruta;}

"K" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_k;}
"M" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_m;}
"BF" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_bf;}
"FF" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_ff;}
"WF" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_wf;}
"B" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_b;}
"P" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_p;}
"E" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_e;}
"L" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_l;}
"FAST" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_fast;}
"FULL" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_full;}

"MBR" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_mbr;}
"DISK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_disk;}
"INODE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_inode;}
"JOURNALING" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_journaling;}
"BLOCK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_block;}
"BM_INODE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_bm_inode;}
"BM_BLOCK" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_bm_block;}
"TREE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_tree;}
"SB" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_sb;}
"FILE" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_file;}
"LS" {columna=columna+ anterior;  anterior = strlen(yytext); strcpy(yylval.TEXT, yytext);return res_ls;}

{filen} {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext); return res_filen;}
{entero} {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext); return entero;}
{cadena} {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext); return cadena;}
{identificador} {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext); return cadena;}
{ruta} {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext); return cadena;}

"=" {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext);return igual;}
"?" {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext);return uno;}
"*" {columna=columna+ anterior;  anterior = strlen(yytext);strcpy(yylval.TEXT, yytext);return unoMas;}

"\n" {linea++; columna=0; anterior=0;}
[[:blank:]] { columna++; }

.   {std::cout<<"Error Lexico: "<<linea<<"\n";}
