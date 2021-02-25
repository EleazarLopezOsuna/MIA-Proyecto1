#ifndef CM_MKFILE_H
#define CM_MKFILE_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_mkfile
{
public:
    cm_mkfile();
    string path;
    bool p;
    int size;
    string cont;
    void ejecutar();
};

#endif // CM_MKFILE_H
