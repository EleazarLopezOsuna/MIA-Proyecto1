#ifndef CM_MOUNT_H
#define CM_MOUNT_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_mount
{
public:
    cm_mount();
    string path;
    char name[10];
    void ejecutar();
};

#endif // CM_MOUNT_H
