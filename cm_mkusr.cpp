#include "cm_mkusr.h"

cm_mkusr::cm_mkusr()
{

}

void cm_mkusr::ejecutar(){
    if(strlen(usr) == 0 || strlen(pwd) == 0 || strlen(grp) == 0){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
