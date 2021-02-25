QT += core
QT -= gui

CONFIG += c++11

TARGET = Proyecto1MIA
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    structsreportes.cpp \
    cm_cat.cpp \
    cm_chgrp.cpp \
    cm_chmod.cpp \
    cm_chown.cpp \
    cm_cp.cpp \
    cm_edit.cpp \
    cm_exec.cpp \
    cm_fdisk.cpp \
    cm_find.cpp \
    cm_login.cpp \
    cm_logout.cpp \
    cm_loss.cpp \
    cm_mkdir.cpp \
    cm_mkdisk.cpp \
    cm_mkfile.cpp \
    cm_mkfs.cpp \
    cm_mkgrp.cpp \
    cm_mkusr.cpp \
    cm_mount.cpp \
    cm_mv.cpp \
    cm_pause.cpp \
    cm_recovery.cpp \
    cm_rem.cpp \
    cm_ren.cpp \
    cm_rep.cpp \
    cm_rmdisk.cpp \
    cm_rmgrp.cpp \
    cm_rmusr.cpp \
    cm_unmount.cpp \
    parser.cpp \
    scanner.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DISTFILES += \
    analizadorSintactico.y \
    analizadorLexico.l

HEADERS += \
    structsreportes.h \
    cm_cat.h \
    cm_chgrp.h \
    cm_chmod.h \
    cm_chown.h \
    cm_cp.h \
    cm_edit.h \
    cm_exec.h \
    cm_fdisk.h \
    cm_find.h \
    cm_login.h \
    cm_logout.h \
    cm_loss.h \
    cm_mkdir.h \
    cm_mkdisk.h \
    cm_mkfile.h \
    cm_mkfs.h \
    cm_mkgrp.h \
    cm_mkusr.h \
    cm_mount.h \
    cm_mv.h \
    cm_pause.h \
    cm_recovery.h \
    cm_rem.h \
    cm_ren.h \
    cm_rep.h \
    cm_rmdisk.h \
    cm_rmgrp.h \
    cm_rmusr.h \
    cm_unmount.h \
    parser.h \
    scanner.h
