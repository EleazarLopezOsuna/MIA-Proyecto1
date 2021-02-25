#ifndef CM_CHOWN_H
#define CM_CHOWN_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class cm_chown
{
public:
    cm_chown();
    string path;
    char usr[10];
    bool r;
    void ejecutar();
};

#endif // CM_CHOWN_H
