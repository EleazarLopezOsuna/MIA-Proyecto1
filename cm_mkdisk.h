#ifndef CM_MKDISK_H
#define CM_MKDISK_H
#include <string>
#include <iostream>
#include <cstring>
#include <structsreportes.h>
#include <ctime>
#include <algorithm>
using namespace std;

class cm_mkdisk
{
public:
    cm_mkdisk();
    void ejecutar();
    int size;
    string path;
    char u;
    char f;
    mbr *mbrDisco;
private:
    void crearDisco();
};

#endif // CM_MKDISK_H
