#include "cm_chmod.h"

cm_chmod::cm_chmod()
{
    u = g = o = -1;
    r = false;
}

void cm_chmod::ejecutar(){
    if(u == -1 || g == -1 || o == -1){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
