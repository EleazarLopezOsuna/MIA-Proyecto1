#include "cm_rep.h"

cm_rep::cm_rep()
{
    name = -1;
}

void cm_rep::ejecutar(){
    if(path == "" || name == -1 || strlen(id) == 0){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
