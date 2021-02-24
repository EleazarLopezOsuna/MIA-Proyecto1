/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    res_mkdisk = 258,
    res_rmdisk = 259,
    res_fdisk = 260,
    res_mount = 261,
    res_unmount = 262,
    res_mkfs = 263,
    res_login = 264,
    res_logout = 265,
    res_mkgrp = 266,
    res_rmgrp = 267,
    res_mkusr = 268,
    res_rmusr = 269,
    res_chmod = 270,
    res_mkfile = 271,
    res_cat = 272,
    res_rem = 273,
    res_edit = 274,
    res_ren = 275,
    res_mkdir = 276,
    res_cp = 277,
    res_mv = 278,
    res_find = 279,
    res_chown = 280,
    res_chgrp = 281,
    res_pause = 282,
    res_recovery = 283,
    res_loss = 284,
    res_exec = 285,
    res_rep = 286,
    res_size = 287,
    res_path = 288,
    res_u = 289,
    res_f = 290,
    res_name = 291,
    res_type = 292,
    res_delete = 293,
    res_add = 294,
    res_id = 295,
    res_2fs = 296,
    res_3fs = 297,
    res_usr = 298,
    res_pwd = 299,
    res_grp = 300,
    res_ugo = 301,
    res_r = 302,
    res_p = 303,
    res_cont = 304,
    res_dest = 305,
    res_ruta = 306,
    res_k = 307,
    res_m = 308,
    res_bf = 309,
    res_ff = 310,
    res_wf = 311,
    res_b = 312,
    res_e = 313,
    res_l = 314,
    res_fast = 315,
    res_full = 316,
    res_mbr = 317,
    res_disk = 318,
    res_inode = 319,
    res_journaling = 320,
    res_block = 321,
    res_bm_inode = 322,
    res_bm_block = 323,
    res_tree = 324,
    res_sb = 325,
    res_file = 326,
    res_ls = 327,
    res_filen = 328,
    entero = 329,
    cadena = 330,
    igual = 331,
    uno = 332,
    unoMas = 333
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 59 "analizadorSintactico.y"

    char TEXT[256];
    char CARACTER;
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

#line 170 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
