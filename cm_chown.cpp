#include "cm_chown.h"

cm_chown::cm_chown()
{
    r = false;
}

void cm_chown::ejecutar(){
    if(path == "" || strlen(usr) == 0){
        cout<<"Los parametros obligatorios no se han completado";\
    }else{
        //Agregar ejecucion
    }
}
