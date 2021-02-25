#include "cm_login.h"

cm_login::cm_login()
{

}

void cm_login::ejecutar(){
    if(strlen(usr) == 0 || strlen(pwd) == 0 || strlen(id) == 0){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
