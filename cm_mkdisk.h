#ifndef CM_MKDISK_H
#define CM_MKDISK_H
#include <string>
#include <iostream>
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

private:
    void crearDisco();
};

#endif // CM_MKDISK_H
