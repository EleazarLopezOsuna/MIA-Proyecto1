#include "cm_mkfs.h"

cm_mkfs::cm_mkfs()
{
    fs2 = true;
    type = 'F';
}

void cm_mkfs::ejecutar(){
    if(strlen(id) == 0){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
