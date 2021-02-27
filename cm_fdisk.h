#ifndef CM_FDISK_H
#define CM_FDISK_H
#include <string>
#include <iostream>
#include <cstring>
#include <structsreportes.h>
#include <ctime>
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
    char name[16];
    bool agregar;
    void ejecutar();
private:
    mbr insertPart(mbr mbrDisco, particion part, int posicion, int freeSize);
    void checkExtendedSpace(FILE *archivo, ebr ebrDisco, int partSize, ebr ebrNuevo, int posicion);
    void insertInExtended(FILE *archivo, ebr ebrNuevo, int posicion, int freeSize);
    particion reescribirParticion(particion vacia, particion part, string path);
    void reescribirExtendida(ebr pruebaEbr, string path, char nombre[16]);
};

#endif // CM_FDISK_H
