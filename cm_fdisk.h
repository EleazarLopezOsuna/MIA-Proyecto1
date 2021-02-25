#ifndef CM_FDISK_H
#define CM_FDISK_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_fdisk
{
public:
    cm_fdisk();
    int size;
    char u;
    string path;
    char type;
    char f;
    bool borrar;
    char tipo_borrar;
    char name[10];
    bool agregar;
    void ejecutar();
};

#endif // CM_FDISK_H
