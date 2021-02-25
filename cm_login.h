#ifndef CM_LOGIN_H
#define CM_LOGIN_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


class cm_login
{
public:
    cm_login();
    char usr[10];
    char pwd[10];
    char id[10];
    void ejecutar();
};

#endif // CM_LOGIN_H
