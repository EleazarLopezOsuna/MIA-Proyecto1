#include "cm_mkdisk.h"

cm_mkdisk::cm_mkdisk(){
    u = 'M';
    f = 'F';
    size = -1;
}

void cm_mkdisk::ejecutar(){
    if(path == "" || size == -1){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
