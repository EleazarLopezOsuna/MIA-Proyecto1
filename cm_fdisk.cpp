#include "cm_fdisk.h"

cm_fdisk::cm_fdisk()
{
    u = 'K';
    type = 'P';
    f = 'W';
    borrar = false;
    agregar = true;
    size = 0;
}

void cm_fdisk::ejecutar(){
    if(path == "" || name == ""){
        cout<<"Los parametros obligatorios no se han completado";
    }else if(borrar && agregar){
        cout<<"Los comandos DELETE y ADD no pueden ir juntos";
    }else if(agregar && size == 0){
        cout<<"Size necesita ser declarado o diferente a 0";
    }else{
        if(borrar){
            //Agregar ejecucion para eliminar
        }else if(agregar){
            //Agregar ejecucion para agregar
        }
    }
}
