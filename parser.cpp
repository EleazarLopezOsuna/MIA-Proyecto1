/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "analizadorSintactico.y"

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

#line 150 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 86 "analizadorSintactico.y"

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

#line 316 "parser.cpp"

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



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

#define YYUNDEFTOK  2
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   247,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     278,   286,   291,   294,   300,   304,   308,   311,   317,   321,
     334,   338,   341,   347,   351,   355,   359,   362,   368,   372,
     376,   379,   385,   389,   393,   396,   403,   409,   413,   417,
     421,   425,   429,   433,   438,   442,   445,   446,   447,   450,
     451,   452,   455,   456,   457,   460,   461,   464,   470,   474,
     478,   481,   487,   491,   495,   499,   502,   508,   514,   520,
     521,   522,   525,   531,   535,   539,   543,   547,   550,   556,
     560,   564,   568,   572,   575,   581,   585,   590,   595,   599,
     602,   609,   615,   619,   623,   627,   630,   636,   640,   644,
     647,   653,   657,   661,   664,   670,   677,   684,   690,   694,
     698,   701,   707,   711,   715,   719,   723,   726,   730,   734,
     738,   742,   746,   750,   754,   758,   762,   766,   772,   779,
     786,   793
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "res_mkdisk", "res_rmdisk", "res_fdisk",
  "res_mount", "res_unmount", "res_mkfs", "res_login", "res_logout",
  "res_mkgrp", "res_rmgrp", "res_mkusr", "res_rmusr", "res_chmod",
  "res_mkfile", "res_cat", "res_rem", "res_edit", "res_ren", "res_mkdir",
  "res_cp", "res_mv", "res_find", "res_chown", "res_chgrp", "res_pause",
  "res_recovery", "res_loss", "res_exec", "res_rep", "res_size",
  "res_path", "res_u", "res_f", "res_name", "res_type", "res_delete",
  "res_add", "res_id", "res_2fs", "res_3fs", "res_usr", "res_pwd",
  "res_grp", "res_ugo", "res_r", "res_p", "res_cont", "res_dest",
  "res_ruta", "res_k", "res_m", "res_bf", "res_ff", "res_wf", "res_b",
  "res_e", "res_l", "res_fast", "res_full", "res_mbr", "res_disk",
  "res_inode", "res_journaling", "res_block", "res_bm_inode",
  "res_bm_block", "res_tree", "res_sb", "res_file", "res_ls", "res_filen",
  "entero", "cadena", "igual", "uno", "unoMas", "$accept", "COMANDOS",
  "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "COMANDO_CAT", "RECURSIVIDAD_FILEN", "COMANDO_CHGRP",
  "ATRIBUTOS_CHGRP", "COMANDO_CHMOD", "ATRIBUTOS_CHMOD", "COMANDO_CHOWN",
  "ATRIBUTOS_CHOWN", "COMANDO_CP", "ATRIBUTOS_CP", "COMANDO_EDIT",
  "ATRIBUTOS_EDIT", "COMANDO_EXEC", "COMANDO_FDISK", "ATRIBUTOS_FDISK",
  "VALOR_U", "VALOR_TYPE", "VALOR_F", "VALOR_DELETE", "COMANDO_FIND",
  "ATRIBUTOS_FIND", "COMANDO_LOGIN", "ATRIBUTOS_LOGIN", "COMANDO_LOGOUT",
  "COMANDO_LOSS", "COMANDO_MKDIR", "ATRIBUTOS_MKDIR", "COMANDO_MKDISK",
  "ATRIBUTOS_MKDISK", "COMANDO_MKFILE", "ATRIBUTOS_MKFILE", "COMANDO_MKFS",
  "ATRIBUTOS_MKFS", "COMANDO_MKGRP", "COMANDO_MKUSR", "ATRIBUTOS_MKUSR",
  "COMANDO_MOUNT", "ATRIBUTOS_MOUNT", "COMANDO_MV", "ATRIBUTOS_MV",
  "COMANDO_PAUSE", "COMANDO_RECOVERY", "COMANDO_REM", "COMANDO_REN",
  "ATRIBUTOS_REN", "COMANDO_REP", "ATRIBUTOS_REP", "VALOR_NAME",
  "COMANDO_RMDISK", "COMANDO_RMGRP", "COMANDO_RMUSR", "COMANDO_UNMOUNT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

#define YYPACT_NINF (-229)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,     3,    -9,    19,    42,    48,    60,    65,    80,   124,
     120,   150,   154,   136,   145,   164,   152,   161,   159,   158,
     166,   151,   146,   147,   160,   156,   148,   173,   168,   167,
     175,  -229,   110,  -229,    24,  -229,    32,  -229,    25,  -229,
     -23,  -229,    17,  -229,   153,  -229,    68,  -229,    50,  -229,
      69,  -229,  -229,  -229,   144,  -229,    15,  -229,    82,  -229,
      22,  -229,   -35,  -229,   149,  -229,    83,  -229,    75,  -229,
      11,  -229,  -229,  -229,   155,  -229,   157,  -229,    89,  -229,
      13,  -229,   163,  -229,   162,  -229,   165,  -229,   169,  -229,
     111,   112,   113,  -229,   115,   116,    32,  -229,   117,   118,
      25,  -229,   121,   123,  -229,   125,   126,  -229,   127,   128,
     129,   130,   131,   134,   135,   137,   138,  -229,   139,   140,
    -229,   141,   142,   143,  -229,   170,   171,    15,  -229,   172,
     174,   176,   177,  -229,   178,   179,    22,   180,  -229,   181,
     182,   -35,   -35,  -229,   183,   184,   185,   186,  -229,   187,
     188,  -229,   189,   190,  -229,   191,   192,   193,   194,  -229,
     195,   196,   197,   198,  -229,   199,   200,   201,   202,   204,
     205,   206,   207,   209,  -229,   210,   211,  -229,   212,   213,
     214,   215,   216,   218,   219,    28,    76,   220,    29,    63,
     222,   223,   224,   225,   226,   227,   228,   229,  -229,   231,
     232,    28,    76,   234,   235,  -229,   236,    63,   237,  -229,
    -229,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    27,   251,   252,   253,   254,   255,
     256,   233,    24,    24,    32,    32,    25,    25,   -23,   -23,
      17,    17,  -229,    68,    68,  -229,  -229,  -229,    68,  -229,
    -229,  -229,    68,    68,  -229,  -229,  -229,    68,  -229,  -229,
      68,    68,    50,    50,    69,    69,    69,  -229,    15,    82,
      82,    82,    82,    22,    22,    22,  -229,   -35,  -229,    83,
      83,    83,    75,    75,    11,    11,  -229,  -229,    89,    89,
      13,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,    13,    13,    13,  -229,  -229,  -229,  -229,   208,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,   257,   233,  -229
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     3,    66,     5,    71,     7,    76,     9,
      80,    11,    84,    13,     0,    15,    95,    17,   110,    19,
     115,    21,   116,    23,     0,    25,   121,    27,   127,    29,
     133,    31,   139,    33,     0,    35,   145,    37,   149,    39,
     153,    41,   154,    43,     0,    45,     0,    47,   160,    49,
     166,    51,     0,    53,     0,    55,     0,    57,     0,    59,
       0,     0,     0,    63,     0,     0,    71,    67,     0,     0,
      76,    72,     0,     0,    77,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
     107,     0,     0,     0,   111,     0,     0,   121,   118,     0,
       0,     0,     0,   122,     0,     0,   133,     0,   128,     0,
       0,   139,   139,   134,     0,     0,     0,     0,   141,     0,
       0,   146,     0,     0,   150,     0,     0,     0,     0,   157,
       0,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,   130,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    66,    66,    71,    71,    76,    76,    80,    80,
      84,    84,    85,    95,    95,    97,    98,    96,    95,   102,
     103,   104,    95,    95,    99,   100,   101,    95,   105,   106,
      95,    95,   110,   110,   115,   115,   115,   117,   121,   127,
     127,   127,   127,   133,   133,   133,   138,   139,   140,   145,
     145,   145,   149,   149,   153,   153,   155,   156,   160,   160,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   166,   166,   166,   178,   179,   180,   181,     0,
      60,    64,    65,    68,    69,    73,    74,    78,    79,    82,
      83,    87,    88,    90,    92,    89,    91,    93,    94,   108,
     109,   114,   112,   113,   119,   123,   124,   125,   126,   131,
     129,   132,   135,   142,   143,   144,   147,   148,   151,   152,
     158,   159,   162,   163,   164,   165,     0,    62,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -157,  -229,   -96,  -229,   -92,  -229,   -91,  -229,
     -90,  -229,   -87,  -229,  -229,  -201,    20,  -229,    18,     5,
    -229,  -107,  -229,  -131,  -229,  -229,  -229,  -127,  -229,  -151,
    -229,  -135,  -229,  -130,  -229,  -229,  -129,  -229,  -125,  -229,
    -124,  -229,  -229,  -229,  -229,  -126,  -229,  -228,  -229,  -229,
    -229,  -229,  -229
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    33,   310,    35,    93,    37,    97,    39,   101,    41,
     104,    43,   107,    45,    47,   117,   248,   257,   252,   260,
      49,   120,    51,   124,    53,    55,    57,   128,    59,   133,
      61,   138,    63,   143,    65,    67,   148,    69,   151,    71,
     154,    73,    75,    77,    79,   159,    81,   164,   302,    83,
      85,    87,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     198,   205,   139,    31,   174,   140,   141,   142,    32,   177,
     102,   209,   210,   -28,   -52,   -16,   -38,   -58,   -32,   -20,
     -22,   -34,   -54,   -36,   -56,    -6,   -30,   103,   -46,   -12,
     -48,   -26,   -10,   -40,   -18,    -8,    -4,   -42,   -44,   -24,
     -14,   -50,   321,   322,   152,    34,   160,   323,   126,   161,
     105,   324,   325,   162,   134,   135,   326,    36,    98,   327,
     328,   153,   352,   127,   163,    94,   106,    91,    99,    92,
     136,   137,   100,    38,   353,   354,   355,   254,    95,    96,
     245,   246,    40,   118,    42,   247,   119,   255,   256,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     109,   110,   111,   112,   113,   114,   115,   116,   149,   121,
      44,   150,   122,   123,   129,   130,   131,   132,   335,   336,
     337,   338,   157,   258,   259,   158,   145,   146,   147,    46,
     249,   250,   251,   331,   332,   333,   311,   312,   339,   340,
     341,   334,   313,   314,    48,   315,   316,   342,   317,   318,
     343,   344,   345,   319,   320,   329,   330,   346,   347,    50,
     348,   349,   350,   351,    52,    54,    56,    58,    60,    62,
      64,    66,    68,    72,    70,    74,    78,    82,    76,    80,
      84,    86,    88,    90,   125,   144,   108,   169,   170,   171,
     156,   172,   173,   175,   176,   155,   165,   178,   166,   179,
     358,   180,   181,   182,   183,   184,   185,   186,   167,   168,
     187,   188,   276,   189,   190,   191,   192,   193,   194,   195,
     272,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,   197,   199,     0,
     200,     0,   201,   202,   203,   204,   206,   207,   208,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   356,   236,   237,   238,   239,   240,
     241,   242,   243,     0,   244,   253,   261,     0,   262,   263,
     264,   265,   266,   267,   268,   269,   309,   270,   273,     0,
     274,   275,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   303,   304,   305,   306,
     307,   308,   357
};

static const yytype_int16 yycheck[] =
{
     127,   136,    37,     0,    96,    40,    41,    42,    17,   100,
      33,   141,   142,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    50,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   243,   244,    33,    26,    33,   248,    33,    36,
      33,   252,   253,    40,    32,    33,   257,    15,    33,   260,
     261,    50,   290,    48,    51,    33,    49,    43,    43,    45,
      48,    49,    47,    25,   302,   303,   304,    48,    46,    47,
      52,    53,    22,    33,    19,    57,    36,    58,    59,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      32,    33,    34,    35,    36,    37,    38,    39,    33,    40,
      30,    36,    43,    44,    32,    33,    34,    35,   269,   270,
     271,   272,    33,    60,    61,    36,    43,    44,    45,     5,
      54,    55,    56,   264,   265,   266,   232,   233,   273,   274,
     275,   268,   234,   235,    24,   236,   237,   277,   238,   239,
     279,   280,   281,   240,   241,   262,   263,   282,   283,     9,
     284,   285,   288,   289,    10,    29,    21,     3,    16,     8,
      11,    13,     6,    27,    23,    28,    20,     4,    18,    31,
      12,    14,     7,    73,    40,    36,    33,    76,    76,    76,
      33,    76,    76,    76,    76,    40,    33,    76,    36,    76,
     357,    76,    76,    76,    76,    76,    76,    76,    43,    40,
      76,    76,   207,    76,    76,    76,    76,    76,    76,    76,
     202,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    76,    76,    -1,
      76,    -1,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    75,
      75,    75,    75,    74,    76,    75,    75,    75,    75,    75,
      75,    75,    74,    -1,    75,    75,    74,    -1,    75,    75,
      75,    75,    75,    75,    75,    74,    73,    75,    74,    -1,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,    17,   110,    26,   112,    15,   114,    25,   116,
      22,   118,    19,   120,    30,   122,     5,   123,    24,   129,
       9,   131,    10,   133,    29,   134,    21,   135,     3,   137,
      16,   139,     8,   141,    11,   143,    13,   144,     6,   146,
      23,   148,    27,   150,    28,   151,    18,   152,    20,   153,
      31,   155,     4,   158,    12,   159,    14,   160,     7,   161,
      73,    43,    45,   113,    33,    46,    47,   115,    33,    43,
      47,   117,    33,    50,   119,    33,    49,   121,    33,    32,
      33,    34,    35,    36,    37,    38,    39,   124,    33,    36,
     130,    40,    43,    44,   132,    40,    33,    48,   136,    32,
      33,    34,    35,   138,    32,    33,    48,    49,   140,    37,
      40,    41,    42,   142,    36,    43,    44,    45,   145,    33,
      36,   147,    33,    50,   149,    40,    33,    33,    36,   154,
      33,    36,    40,    51,   156,    33,    36,    43,    40,    76,
      76,    76,    76,    76,   115,    76,    76,   117,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,   136,    76,
      76,    76,    76,    76,    76,   140,    76,    76,    76,   142,
     142,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    75,    75,    75,    75,    74,    75,    75,    75,    75,
      75,    75,    75,    74,    75,    52,    53,    57,   125,    54,
      55,    56,   127,    75,    48,    58,    59,   126,    60,    61,
     128,    74,    75,    75,    75,    75,    75,    75,    75,    74,
      75,   125,   127,    74,    75,    75,   128,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   157,    75,    75,    75,    75,    75,    75,    73,
     111,   113,   113,   115,   115,   117,   117,   119,   119,   121,
     121,   124,   124,   124,   124,   124,   124,   124,   124,   130,
     130,   132,   132,   132,   136,   138,   138,   138,   138,   140,
     140,   140,   142,   145,   145,   145,   147,   147,   149,   149,
     154,   154,   156,   156,   156,   156,    76,    75,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    81,    80,    82,    80,    83,    80,    84,    80,
      85,    80,    86,    80,    87,    80,    88,    80,    89,    80,
      90,    80,    91,    80,    92,    80,    93,    80,    94,    80,
      95,    80,    96,    80,    97,    80,    98,    80,    99,    80,
     100,    80,   101,    80,   102,    80,   103,    80,   104,    80,
     105,    80,   106,    80,   107,    80,   108,    80,   109,    80,
     110,   111,   111,   112,   113,   113,   113,   114,   115,   115,
     115,   115,   116,   117,   117,   117,   117,   118,   119,   119,
     119,   120,   121,   121,   121,   122,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   126,   127,   127,   127,   128,   128,   129,   130,   130,
     130,   131,   132,   132,   132,   132,   133,   134,   135,   136,
     136,   136,   137,   138,   138,   138,   138,   138,   139,   140,
     140,   140,   140,   140,   141,   142,   142,   142,   142,   142,
     143,   144,   145,   145,   145,   145,   146,   147,   147,   147,
     148,   149,   149,   149,   150,   151,   152,   153,   154,   154,
     154,   155,   156,   156,   156,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   158,   159,
     160,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       5,     4,     0,     2,     4,     4,     0,     2,     4,     4,
       2,     0,     2,     4,     4,     2,     0,     2,     4,     4,
       0,     2,     4,     4,     0,     4,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       0,     2,     4,     4,     4,     0,     1,     4,     2,     4,
       2,     0,     2,     4,     4,     4,     4,     0,     2,     4,
       2,     4,     4,     0,     2,     4,     2,     2,     3,     0,
       4,     2,     4,     4,     4,     0,     2,     4,     4,     0,
       2,     4,     4,     0,     1,     4,     4,     2,     4,     4,
       0,     2,     4,     4,     4,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 247 "analizadorSintactico.y"
          { n_cat = new cm_cat(); }
#line 1874 "parser.cpp"
    break;

  case 3:
#line 247 "analizadorSintactico.y"
                                                { n_cat->ejecutar(); }
#line 1880 "parser.cpp"
    break;

  case 4:
#line 248 "analizadorSintactico.y"
      { n_chgrp = new cm_chgrp(); }
#line 1886 "parser.cpp"
    break;

  case 5:
#line 248 "analizadorSintactico.y"
                                                  { n_chgrp->ejecutar(); }
#line 1892 "parser.cpp"
    break;

  case 6:
#line 249 "analizadorSintactico.y"
      { n_chmod = new cm_chmod(); }
#line 1898 "parser.cpp"
    break;

  case 7:
#line 249 "analizadorSintactico.y"
                                                  { n_chmod->ejecutar(); }
#line 1904 "parser.cpp"
    break;

  case 8:
#line 250 "analizadorSintactico.y"
      { n_chown = new cm_chown(); }
#line 1910 "parser.cpp"
    break;

  case 9:
#line 250 "analizadorSintactico.y"
                                                  { n_chown->ejecutar(); }
#line 1916 "parser.cpp"
    break;

  case 10:
#line 251 "analizadorSintactico.y"
      { n_cp = new cm_cp(); }
#line 1922 "parser.cpp"
    break;

  case 11:
#line 251 "analizadorSintactico.y"
                                         { n_cp->ejecutar(); }
#line 1928 "parser.cpp"
    break;

  case 12:
#line 252 "analizadorSintactico.y"
      { n_edit = new cm_edit(); }
#line 1934 "parser.cpp"
    break;

  case 13:
#line 252 "analizadorSintactico.y"
                                               { n_edit->ejecutar(); }
#line 1940 "parser.cpp"
    break;

  case 14:
#line 253 "analizadorSintactico.y"
      { n_exec = new cm_exec(); }
#line 1946 "parser.cpp"
    break;

  case 15:
#line 253 "analizadorSintactico.y"
                                               { n_exec->ejecutar(); }
#line 1952 "parser.cpp"
    break;

  case 16:
#line 254 "analizadorSintactico.y"
      { n_fdisk = new cm_fdisk(); }
#line 1958 "parser.cpp"
    break;

  case 17:
#line 254 "analizadorSintactico.y"
                                                  { n_fdisk->ejecutar(); }
#line 1964 "parser.cpp"
    break;

  case 18:
#line 255 "analizadorSintactico.y"
      { n_find = new cm_find(); }
#line 1970 "parser.cpp"
    break;

  case 19:
#line 255 "analizadorSintactico.y"
                                               { n_find->ejecutar(); }
#line 1976 "parser.cpp"
    break;

  case 20:
#line 256 "analizadorSintactico.y"
      { n_login = new cm_login(); }
#line 1982 "parser.cpp"
    break;

  case 21:
#line 256 "analizadorSintactico.y"
                                                  { n_login->ejecutar(); }
#line 1988 "parser.cpp"
    break;

  case 22:
#line 257 "analizadorSintactico.y"
      { n_logout = new cm_logout(); }
#line 1994 "parser.cpp"
    break;

  case 23:
#line 257 "analizadorSintactico.y"
                                                     { n_logout->ejecutar(); }
#line 2000 "parser.cpp"
    break;

  case 24:
#line 258 "analizadorSintactico.y"
      { n_loss = new cm_loss(); }
#line 2006 "parser.cpp"
    break;

  case 25:
#line 258 "analizadorSintactico.y"
                                               { n_loss->ejecutar(); }
#line 2012 "parser.cpp"
    break;

  case 26:
#line 259 "analizadorSintactico.y"
      { n_mkdir = new cm_mkdir(); }
#line 2018 "parser.cpp"
    break;

  case 27:
#line 259 "analizadorSintactico.y"
                                                  { n_mkdir->ejecutar(); }
#line 2024 "parser.cpp"
    break;

  case 28:
#line 260 "analizadorSintactico.y"
      { n_mkdisk = new cm_mkdisk(); }
#line 2030 "parser.cpp"
    break;

  case 29:
#line 260 "analizadorSintactico.y"
                                                     { n_mkdisk->ejecutar(); }
#line 2036 "parser.cpp"
    break;

  case 30:
#line 261 "analizadorSintactico.y"
      { n_mkfile = new cm_mkfile(); }
#line 2042 "parser.cpp"
    break;

  case 31:
#line 261 "analizadorSintactico.y"
                                                     { n_mkfile->ejecutar(); }
#line 2048 "parser.cpp"
    break;

  case 32:
#line 262 "analizadorSintactico.y"
      { n_mkfs = new cm_mkfs(); }
#line 2054 "parser.cpp"
    break;

  case 33:
#line 262 "analizadorSintactico.y"
                                               { n_mkfs->ejecutar(); }
#line 2060 "parser.cpp"
    break;

  case 34:
#line 263 "analizadorSintactico.y"
      { n_mkgrp = new cm_mkgrp(); }
#line 2066 "parser.cpp"
    break;

  case 35:
#line 263 "analizadorSintactico.y"
                                                  { n_mkgrp->ejecutar(); }
#line 2072 "parser.cpp"
    break;

  case 36:
#line 264 "analizadorSintactico.y"
      { n_mkusr = new cm_mkusr(); }
#line 2078 "parser.cpp"
    break;

  case 37:
#line 264 "analizadorSintactico.y"
                                                  { n_mkusr->ejecutar(); }
#line 2084 "parser.cpp"
    break;

  case 38:
#line 265 "analizadorSintactico.y"
      { n_mount = new cm_mount(); }
#line 2090 "parser.cpp"
    break;

  case 39:
#line 265 "analizadorSintactico.y"
                                                  { n_mount->ejecutar(); }
#line 2096 "parser.cpp"
    break;

  case 40:
#line 266 "analizadorSintactico.y"
      { n_mv = new cm_mv(); }
#line 2102 "parser.cpp"
    break;

  case 41:
#line 266 "analizadorSintactico.y"
                                         { n_mv->ejecutar(); }
#line 2108 "parser.cpp"
    break;

  case 42:
#line 267 "analizadorSintactico.y"
      { n_pause = new cm_pause(); }
#line 2114 "parser.cpp"
    break;

  case 43:
#line 267 "analizadorSintactico.y"
                                                 { n_pause->ejecutar(); }
#line 2120 "parser.cpp"
    break;

  case 44:
#line 268 "analizadorSintactico.y"
      { n_recovery = new cm_recovery(); }
#line 2126 "parser.cpp"
    break;

  case 45:
#line 268 "analizadorSintactico.y"
                                                           { n_recovery->ejecutar(); }
#line 2132 "parser.cpp"
    break;

  case 46:
#line 269 "analizadorSintactico.y"
      { n_rem = new cm_rem(); }
#line 2138 "parser.cpp"
    break;

  case 47:
#line 269 "analizadorSintactico.y"
                                            { n_rem->ejecutar(); }
#line 2144 "parser.cpp"
    break;

  case 48:
#line 270 "analizadorSintactico.y"
      { n_ren = new cm_ren(); }
#line 2150 "parser.cpp"
    break;

  case 49:
#line 270 "analizadorSintactico.y"
                                            { n_ren->ejecutar(); }
#line 2156 "parser.cpp"
    break;

  case 50:
#line 271 "analizadorSintactico.y"
      { n_rep = new cm_rep(); }
#line 2162 "parser.cpp"
    break;

  case 51:
#line 271 "analizadorSintactico.y"
                                            { n_rep->ejecutar(); }
#line 2168 "parser.cpp"
    break;

  case 52:
#line 272 "analizadorSintactico.y"
      { n_rmdisk = new cm_rmdisk(); }
#line 2174 "parser.cpp"
    break;

  case 53:
#line 272 "analizadorSintactico.y"
                                                     { n_rmdisk->ejecutar(); }
#line 2180 "parser.cpp"
    break;

  case 54:
#line 273 "analizadorSintactico.y"
      { n_rmgrp = new cm_rmgrp(); }
#line 2186 "parser.cpp"
    break;

  case 55:
#line 273 "analizadorSintactico.y"
                                                  { n_rmgrp->ejecutar(); }
#line 2192 "parser.cpp"
    break;

  case 56:
#line 274 "analizadorSintactico.y"
      { n_rmusr = new cm_rmusr(); }
#line 2198 "parser.cpp"
    break;

  case 57:
#line 274 "analizadorSintactico.y"
                                                  { n_rmusr->ejecutar(); }
#line 2204 "parser.cpp"
    break;

  case 58:
#line 275 "analizadorSintactico.y"
      { n_unmount = new cm_unmount(); }
#line 2210 "parser.cpp"
    break;

  case 59:
#line 275 "analizadorSintactico.y"
                                                        { n_unmount->ejecutar(); }
#line 2216 "parser.cpp"
    break;

  case 60:
#line 278 "analizadorSintactico.y"
                                                               {
        filen* nuevo = new filen();
        nuevo->path = (yyvsp[-1].TEXT);
        n_cat->insertar(nuevo);
        (yyval.cat_comm) = n_cat;
    }
#line 2227 "parser.cpp"
    break;

  case 61:
#line 286 "analizadorSintactico.y"
                                                             {
        filen* nuevo = new filen();
        nuevo->path = (yyvsp[-1].TEXT);
        n_cat->insertar(nuevo);
    }
#line 2237 "parser.cpp"
    break;

  case 62:
#line 291 "analizadorSintactico.y"
     {}
#line 2243 "parser.cpp"
    break;

  case 63:
#line 295 "analizadorSintactico.y"
{
    (yyval.chgrp_comm) = n_chgrp;
}
#line 2251 "parser.cpp"
    break;

  case 64:
#line 301 "analizadorSintactico.y"
{
    strncpy(n_chgrp->usr, (yyvsp[-1].TEXT), 10);
}
#line 2259 "parser.cpp"
    break;

  case 65:
#line 305 "analizadorSintactico.y"
{
    strncpy(n_chgrp->grp, (yyvsp[-1].TEXT), 10);
}
#line 2267 "parser.cpp"
    break;

  case 66:
#line 308 "analizadorSintactico.y"
     {}
#line 2273 "parser.cpp"
    break;

  case 67:
#line 312 "analizadorSintactico.y"
{
    (yyval.chmod_comm) = n_chmod;
}
#line 2281 "parser.cpp"
    break;

  case 68:
#line 318 "analizadorSintactico.y"
{
    n_chmod->path = (yyvsp[-1].TEXT);
}
#line 2289 "parser.cpp"
    break;

  case 69:
#line 322 "analizadorSintactico.y"
{
    int total = atoi((yyvsp[-1].TEXT));
    int u = total/100;
    total = total - (u*100);
    int g = total/10;
    total = total - (g*10);
    int o = total;

    n_chmod->g = g;
    n_chmod->u = u;
    n_chmod->o = o;
}
#line 2306 "parser.cpp"
    break;

  case 70:
#line 335 "analizadorSintactico.y"
{
    n_chmod->r = true;
}
#line 2314 "parser.cpp"
    break;

  case 71:
#line 338 "analizadorSintactico.y"
     {}
#line 2320 "parser.cpp"
    break;

  case 72:
#line 342 "analizadorSintactico.y"
{
    (yyval.chown_comm) = n_chown;
}
#line 2328 "parser.cpp"
    break;

  case 73:
#line 348 "analizadorSintactico.y"
{
    n_chown->path = (yyvsp[-1].TEXT);
}
#line 2336 "parser.cpp"
    break;

  case 74:
#line 352 "analizadorSintactico.y"
{
    strncpy(n_chown->usr, (yyvsp[-1].TEXT), 10);
}
#line 2344 "parser.cpp"
    break;

  case 75:
#line 356 "analizadorSintactico.y"
{
    n_chown->r = true;
}
#line 2352 "parser.cpp"
    break;

  case 76:
#line 359 "analizadorSintactico.y"
     {}
#line 2358 "parser.cpp"
    break;

  case 77:
#line 363 "analizadorSintactico.y"
{
    (yyval.cp_comm) = n_cp;
}
#line 2366 "parser.cpp"
    break;

  case 78:
#line 369 "analizadorSintactico.y"
{
    n_cp->path = (yyvsp[-1].TEXT);
}
#line 2374 "parser.cpp"
    break;

  case 79:
#line 373 "analizadorSintactico.y"
{
    n_cp->dest = (yyvsp[-1].TEXT);
}
#line 2382 "parser.cpp"
    break;

  case 80:
#line 376 "analizadorSintactico.y"
     {}
#line 2388 "parser.cpp"
    break;

  case 81:
#line 380 "analizadorSintactico.y"
{
    (yyval.edit_comm) = n_edit;
}
#line 2396 "parser.cpp"
    break;

  case 82:
#line 386 "analizadorSintactico.y"
{
    n_edit->path = (yyvsp[-1].TEXT);
}
#line 2404 "parser.cpp"
    break;

  case 83:
#line 390 "analizadorSintactico.y"
{
    n_edit->cont = (yyvsp[-1].TEXT);
}
#line 2412 "parser.cpp"
    break;

  case 84:
#line 393 "analizadorSintactico.y"
     {}
#line 2418 "parser.cpp"
    break;

  case 85:
#line 397 "analizadorSintactico.y"
{
    n_exec->path = (yyvsp[0].TEXT);
    (yyval.exec_comm) = n_exec;
}
#line 2427 "parser.cpp"
    break;

  case 86:
#line 404 "analizadorSintactico.y"
{
    (yyval.fdisk_comm) = n_fdisk;
}
#line 2435 "parser.cpp"
    break;

  case 87:
#line 410 "analizadorSintactico.y"
{
    n_fdisk->size = atoi((yyvsp[-1].TEXT));
}
#line 2443 "parser.cpp"
    break;

  case 88:
#line 414 "analizadorSintactico.y"
{
    n_fdisk->path = (yyvsp[-1].TEXT);
}
#line 2451 "parser.cpp"
    break;

  case 89:
#line 418 "analizadorSintactico.y"
{
    strncpy(n_fdisk->name, (yyvsp[-1].TEXT), 10);
}
#line 2459 "parser.cpp"
    break;

  case 90:
#line 422 "analizadorSintactico.y"
{
    n_fdisk->u = (yyvsp[-1].CARACTER);
}
#line 2467 "parser.cpp"
    break;

  case 91:
#line 426 "analizadorSintactico.y"
{
    n_fdisk->type = (yyvsp[-1].CARACTER);
}
#line 2475 "parser.cpp"
    break;

  case 92:
#line 430 "analizadorSintactico.y"
{
    n_fdisk->f = (yyvsp[-1].CARACTER);
}
#line 2483 "parser.cpp"
    break;

  case 93:
#line 434 "analizadorSintactico.y"
{
    n_fdisk->borrar = true;
    n_fdisk->tipo_borrar = (yyvsp[-1].CARACTER);
}
#line 2492 "parser.cpp"
    break;

  case 94:
#line 439 "analizadorSintactico.y"
{
    n_fdisk->agregar = true;
}
#line 2500 "parser.cpp"
    break;

  case 95:
#line 442 "analizadorSintactico.y"
     {}
#line 2506 "parser.cpp"
    break;

  case 96:
#line 445 "analizadorSintactico.y"
               { (yyval.CARACTER) = 'B'; }
#line 2512 "parser.cpp"
    break;

  case 97:
#line 446 "analizadorSintactico.y"
            { (yyval.CARACTER) = 'K'; }
#line 2518 "parser.cpp"
    break;

  case 98:
#line 447 "analizadorSintactico.y"
            { (yyval.CARACTER) = 'M'; }
#line 2524 "parser.cpp"
    break;

  case 99:
#line 450 "analizadorSintactico.y"
                  { (yyval.CARACTER) = 'P'; }
#line 2530 "parser.cpp"
    break;

  case 100:
#line 451 "analizadorSintactico.y"
            { (yyval.CARACTER) = 'E'; }
#line 2536 "parser.cpp"
    break;

  case 101:
#line 452 "analizadorSintactico.y"
            { (yyval.CARACTER) = 'L'; }
#line 2542 "parser.cpp"
    break;

  case 102:
#line 455 "analizadorSintactico.y"
                { (yyval.CARACTER) = 'B'; }
#line 2548 "parser.cpp"
    break;

  case 103:
#line 456 "analizadorSintactico.y"
             { (yyval.CARACTER) = 'F'; }
#line 2554 "parser.cpp"
    break;

  case 104:
#line 457 "analizadorSintactico.y"
             { (yyval.CARACTER) = 'W'; }
#line 2560 "parser.cpp"
    break;

  case 105:
#line 460 "analizadorSintactico.y"
                      { (yyval.CARACTER) = 'R'; }
#line 2566 "parser.cpp"
    break;

  case 106:
#line 461 "analizadorSintactico.y"
              { (yyval.CARACTER) = 'F'; }
#line 2572 "parser.cpp"
    break;

  case 107:
#line 465 "analizadorSintactico.y"
{
    (yyval.findcl_comm) = n_find;
}
#line 2580 "parser.cpp"
    break;

  case 108:
#line 471 "analizadorSintactico.y"
{
    n_find->path = (yyvsp[-1].TEXT);
}
#line 2588 "parser.cpp"
    break;

  case 109:
#line 475 "analizadorSintactico.y"
{
    strncpy(n_find->name, (yyvsp[-1].TEXT), 10);
}
#line 2596 "parser.cpp"
    break;

  case 110:
#line 478 "analizadorSintactico.y"
     {}
#line 2602 "parser.cpp"
    break;

  case 111:
#line 482 "analizadorSintactico.y"
{
    (yyval.login_comm) = n_login;
}
#line 2610 "parser.cpp"
    break;

  case 112:
#line 488 "analizadorSintactico.y"
{
    strncpy(n_login->usr, (yyvsp[-1].TEXT), 10);
}
#line 2618 "parser.cpp"
    break;

  case 113:
#line 492 "analizadorSintactico.y"
{
    strncpy(n_login->pwd, (yyvsp[-1].TEXT), 10);
}
#line 2626 "parser.cpp"
    break;

  case 114:
#line 496 "analizadorSintactico.y"
{
    strncpy(n_login->id, (yyvsp[-1].TEXT), 10);
}
#line 2634 "parser.cpp"
    break;

  case 115:
#line 499 "analizadorSintactico.y"
     {}
#line 2640 "parser.cpp"
    break;

  case 116:
#line 503 "analizadorSintactico.y"
{
    (yyval.logout_comm) = n_logout;
}
#line 2648 "parser.cpp"
    break;

  case 117:
#line 509 "analizadorSintactico.y"
{
    (yyval.loss_comm) = n_loss;
}
#line 2656 "parser.cpp"
    break;

  case 118:
#line 515 "analizadorSintactico.y"
{
    (yyval.mkdir_comm) = n_mkdir;
}
#line 2664 "parser.cpp"
    break;

  case 121:
#line 522 "analizadorSintactico.y"
     {}
#line 2670 "parser.cpp"
    break;

  case 122:
#line 526 "analizadorSintactico.y"
{
    (yyval.mkdisk_comm) = n_mkdisk;
}
#line 2678 "parser.cpp"
    break;

  case 123:
#line 532 "analizadorSintactico.y"
{
    n_mkdisk->size = atoi((yyvsp[-1].TEXT));
}
#line 2686 "parser.cpp"
    break;

  case 124:
#line 536 "analizadorSintactico.y"
{
    n_mkdisk->path = (yyvsp[-1].TEXT);
}
#line 2694 "parser.cpp"
    break;

  case 125:
#line 540 "analizadorSintactico.y"
{
    n_mkdisk->u = (yyvsp[-1].CARACTER);
}
#line 2702 "parser.cpp"
    break;

  case 126:
#line 544 "analizadorSintactico.y"
{
    n_mkdisk->f = (yyvsp[-1].CARACTER);
}
#line 2710 "parser.cpp"
    break;

  case 127:
#line 547 "analizadorSintactico.y"
     {}
#line 2716 "parser.cpp"
    break;

  case 128:
#line 551 "analizadorSintactico.y"
{
    (yyval.mkfile_comm) = n_mkfile;
}
#line 2724 "parser.cpp"
    break;

  case 129:
#line 557 "analizadorSintactico.y"
{
    n_mkfile->path = (yyvsp[-1].TEXT);
}
#line 2732 "parser.cpp"
    break;

  case 130:
#line 561 "analizadorSintactico.y"
{
    n_mkfile->p = true;
}
#line 2740 "parser.cpp"
    break;

  case 131:
#line 565 "analizadorSintactico.y"
{
    n_mkfile->size = atoi((yyvsp[-1].TEXT));
}
#line 2748 "parser.cpp"
    break;

  case 132:
#line 569 "analizadorSintactico.y"
{
    n_mkfile->cont = (yyvsp[-1].TEXT);
}
#line 2756 "parser.cpp"
    break;

  case 133:
#line 572 "analizadorSintactico.y"
     {}
#line 2762 "parser.cpp"
    break;

  case 134:
#line 576 "analizadorSintactico.y"
{
    (yyval.mkfs_comm) = n_mkfs;
}
#line 2770 "parser.cpp"
    break;

  case 135:
#line 582 "analizadorSintactico.y"
{
    strncpy(n_mkfs->id, (yyvsp[-1].TEXT), 10);
}
#line 2778 "parser.cpp"
    break;

  case 136:
#line 586 "analizadorSintactico.y"
{
    n_mkfs->fs2 = true;
    n_mkfs->fs3 = false;
}
#line 2787 "parser.cpp"
    break;

  case 137:
#line 591 "analizadorSintactico.y"
{
    n_mkfs->fs3 = true;
    n_mkfs->fs2 = false;
}
#line 2796 "parser.cpp"
    break;

  case 138:
#line 596 "analizadorSintactico.y"
{
    n_mkfs->type = (yyvsp[0].CARACTER);
}
#line 2804 "parser.cpp"
    break;

  case 139:
#line 599 "analizadorSintactico.y"
     {}
#line 2810 "parser.cpp"
    break;

  case 140:
#line 603 "analizadorSintactico.y"
{
    strncpy(n_mkgrp->name, (yyvsp[0].TEXT), 10);
    (yyval.mkgrp_comm) = n_mkgrp;
}
#line 2819 "parser.cpp"
    break;

  case 141:
#line 610 "analizadorSintactico.y"
{
    (yyval.mkusr_comm) = n_mkusr;
}
#line 2827 "parser.cpp"
    break;

  case 142:
#line 616 "analizadorSintactico.y"
{
    strncpy(n_mkusr->usr, (yyvsp[-1].TEXT), 10);
}
#line 2835 "parser.cpp"
    break;

  case 143:
#line 620 "analizadorSintactico.y"
{
    strncpy(n_mkusr->pwd, (yyvsp[-1].TEXT), 10);
}
#line 2843 "parser.cpp"
    break;

  case 144:
#line 624 "analizadorSintactico.y"
{
    strncpy(n_mkusr->grp, (yyvsp[-1].TEXT), 10);
}
#line 2851 "parser.cpp"
    break;

  case 145:
#line 627 "analizadorSintactico.y"
     {}
#line 2857 "parser.cpp"
    break;

  case 146:
#line 631 "analizadorSintactico.y"
{
    (yyval.mount_comm) = n_mount;
}
#line 2865 "parser.cpp"
    break;

  case 147:
#line 637 "analizadorSintactico.y"
{
    n_mount->path = (yyvsp[-1].TEXT);
}
#line 2873 "parser.cpp"
    break;

  case 148:
#line 641 "analizadorSintactico.y"
{
    strncpy(n_mount->name, (yyvsp[-1].TEXT), 10);
}
#line 2881 "parser.cpp"
    break;

  case 149:
#line 644 "analizadorSintactico.y"
     {}
#line 2887 "parser.cpp"
    break;

  case 150:
#line 648 "analizadorSintactico.y"
{
    (yyval.mv_comm) = n_mv;
}
#line 2895 "parser.cpp"
    break;

  case 151:
#line 654 "analizadorSintactico.y"
{
    n_mv->path = (yyvsp[-1].TEXT);
}
#line 2903 "parser.cpp"
    break;

  case 152:
#line 658 "analizadorSintactico.y"
{
    n_mv->dest = (yyvsp[-1].TEXT);
}
#line 2911 "parser.cpp"
    break;

  case 153:
#line 661 "analizadorSintactico.y"
     {}
#line 2917 "parser.cpp"
    break;

  case 154:
#line 665 "analizadorSintactico.y"
{
    (yyval.pause_comm) = n_pause;
}
#line 2925 "parser.cpp"
    break;

  case 155:
#line 671 "analizadorSintactico.y"
{
    strncpy(n_recovery->id, (yyvsp[0].TEXT), 10);
    (yyval.recovery_comm) = n_recovery;
}
#line 2934 "parser.cpp"
    break;

  case 156:
#line 678 "analizadorSintactico.y"
{
    n_rem->path = (yyvsp[-1].TEXT);
    (yyval.rem_comm) = n_rem;
}
#line 2943 "parser.cpp"
    break;

  case 157:
#line 685 "analizadorSintactico.y"
{
    (yyval.ren_comm) = n_ren;
}
#line 2951 "parser.cpp"
    break;

  case 158:
#line 691 "analizadorSintactico.y"
{
    n_ren->path = (yyvsp[-1].TEXT);
}
#line 2959 "parser.cpp"
    break;

  case 159:
#line 695 "analizadorSintactico.y"
{
    strncpy(n_ren->name, (yyvsp[-1].TEXT), 10);
}
#line 2967 "parser.cpp"
    break;

  case 160:
#line 698 "analizadorSintactico.y"
     {}
#line 2973 "parser.cpp"
    break;

  case 161:
#line 702 "analizadorSintactico.y"
{
    (yyval.rep_comm) = n_rep;
}
#line 2981 "parser.cpp"
    break;

  case 162:
#line 708 "analizadorSintactico.y"
{
    n_rep->path = (yyvsp[-1].TEXT);
}
#line 2989 "parser.cpp"
    break;

  case 163:
#line 712 "analizadorSintactico.y"
{
    n_rep->name = (yyvsp[-1].NUMERO);
}
#line 2997 "parser.cpp"
    break;

  case 164:
#line 716 "analizadorSintactico.y"
{
    strncpy(n_rep->id, (yyvsp[-1].TEXT), 10);
}
#line 3005 "parser.cpp"
    break;

  case 165:
#line 720 "analizadorSintactico.y"
{
    n_rep->ruta = (yyvsp[-1].TEXT);
}
#line 3013 "parser.cpp"
    break;

  case 166:
#line 723 "analizadorSintactico.y"
     {}
#line 3019 "parser.cpp"
    break;

  case 167:
#line 727 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 1;
}
#line 3027 "parser.cpp"
    break;

  case 168:
#line 731 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 2;
}
#line 3035 "parser.cpp"
    break;

  case 169:
#line 735 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 3;
}
#line 3043 "parser.cpp"
    break;

  case 170:
#line 739 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 4;
}
#line 3051 "parser.cpp"
    break;

  case 171:
#line 743 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 5;
}
#line 3059 "parser.cpp"
    break;

  case 172:
#line 747 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 6;
}
#line 3067 "parser.cpp"
    break;

  case 173:
#line 751 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 7;
}
#line 3075 "parser.cpp"
    break;

  case 174:
#line 755 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 8;
}
#line 3083 "parser.cpp"
    break;

  case 175:
#line 759 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 9;
}
#line 3091 "parser.cpp"
    break;

  case 176:
#line 763 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 10;
}
#line 3099 "parser.cpp"
    break;

  case 177:
#line 767 "analizadorSintactico.y"
{
    (yyval.NUMERO) = 11;
}
#line 3107 "parser.cpp"
    break;

  case 178:
#line 773 "analizadorSintactico.y"
{
    n_rmdisk->path = (yyvsp[0].TEXT);
    (yyval.rmdisk_comm) = n_rmdisk;
}
#line 3116 "parser.cpp"
    break;

  case 179:
#line 780 "analizadorSintactico.y"
{
    strncpy(n_rmgrp->name, (yyvsp[0].TEXT), 10);
    (yyval.rmgrp_comm) = n_rmgrp;
}
#line 3125 "parser.cpp"
    break;

  case 180:
#line 787 "analizadorSintactico.y"
{
    strncpy(n_rmusr->usr, (yyvsp[0].TEXT), 10);
    (yyval.rmusr_comm) = n_rmusr;
}
#line 3134 "parser.cpp"
    break;

  case 181:
#line 794 "analizadorSintactico.y"
{
    strncpy(n_unmount->id, (yyvsp[0].TEXT), 10);
    (yyval.unmount_comm) = n_unmount;
}
#line 3143 "parser.cpp"
    break;


#line 3147 "parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
