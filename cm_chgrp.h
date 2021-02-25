#ifndef CM_CHGRP_H
#define CM_CHGRP_H
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class cm_chgrp
{
public:
    cm_chgrp();
    char usr[10];
    char grp[10];
    void ejecutar();
};

#endif // CM_CHGRP_H
