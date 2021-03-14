#ifndef CM_EXEC_H
#define CM_EXEC_H
#include <string>
#include <iostream>
#include <cstring>
#include "iostream"
#include <QString>
#include <parser.h>
#include <scanner.h>
#include <QTextStream>
#include <structsreportes.h>
#include <fstream>
#include <algorithm>
using namespace std;


class cm_exec
{
public:
    cm_exec();
    string path;
    void ejecutar();
    int p;
};

#endif // CM_EXEC_H
