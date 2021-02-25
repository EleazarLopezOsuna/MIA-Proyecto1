#ifndef CM_MKDISK_H
#define CM_MKDISK_H
#include <string>
#include <iostream>
#include <cstring>
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
};

#endif // CM_MKDISK_H
