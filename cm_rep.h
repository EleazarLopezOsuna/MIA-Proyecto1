#ifndef CM_REP_H
#define CM_REP_H
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <structsreportes.h>
#include <time.h>
using namespace std;


class cm_rep
{
public:
    cm_rep();
    int name;
    string path;
    string id;
    string ruta;
    void ejecutar();
};

#endif // CM_REP_H
