#ifndef CM_CHMOD_H
#define CM_CHMOD_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_chmod
{
public:
    cm_chmod();
    int u;
    int g;
    int o;
    bool r;
    string path;
    void ejecutar();
};

#endif // CM_CHMOD_H
