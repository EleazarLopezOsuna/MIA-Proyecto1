#include "cm_chgrp.h"

cm_chgrp::cm_chgrp()
{

}

void cm_chgrp::ejecutar(){
    if(strlen(usr) == 0 || strlen(grp) == 0){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        //Agregar ejecucion
    }
}
