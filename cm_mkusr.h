#ifndef CM_MKUSR_H
#define CM_MKUSR_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_mkusr
{
public:
    cm_mkusr();
    char usr[10];
    char pwd[10];
    char grp[10];
    void ejecutar();
};

#endif // CM_MKUSR_H
