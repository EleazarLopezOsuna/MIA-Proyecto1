#ifndef CM_CAT_H
#define CM_CAT_H
#include <string>
#include <iostream>
using namespace std;

struct filen{
    string path;
    filen* siguiente;
};

class cm_cat
{
public:
    cm_cat();
    void insertar(filen* nuevo);
    void ejecutar();

private:
    filen* primero;
};

#endif // CM_CAT_H
