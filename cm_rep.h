#ifndef CM_REP_H
#define CM_REP_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_rep
{
public:
    cm_rep();
    int name;
    string path;
    char id[10];
    string ruta;
    void ejecutar();
};

#endif // CM_REP_H
