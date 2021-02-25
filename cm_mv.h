#ifndef CM_MV_H
#define CM_MV_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_mv
{
public:
    cm_mv();
    string path;
    string dest;
    void ejecutar();
};

#endif // CM_MV_H
