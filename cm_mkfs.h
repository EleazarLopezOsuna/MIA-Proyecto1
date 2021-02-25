#ifndef CM_MKFS_H
#define CM_MKFS_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_mkfs
{
public:
    cm_mkfs();
    char id[10];
    char type;
    bool fs2;
    bool fs3;
    void ejecutar();
};

#endif // CM_MKFS_H
