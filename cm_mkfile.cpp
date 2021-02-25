#include "cm_mkfile.h"

cm_mkfile::cm_mkfile()
{
    p = false;
    size = -1;
}

void cm_mkfile::ejecutar(){
    if(path == ""){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        if(size == -1 || cont == ""){
            cout<<"Se necesita definir size o contenido";
        }else{
            //Agregar ejecucion
        }
    }
}
