#include "cm_cat.h"

cm_cat::cm_cat()
{

}

void cm_cat::insertar(filen* nuevo){
    if(primero == nullptr){
        primero = nuevo;
    }else{
        nuevo->siguiente = primero;
        primero = nuevo;
    }
}

void cm_cat::ejecutar(){
    filen* tmp = primero;
    while(tmp != nullptr){
        //Agregar ejecucion
        tmp = tmp->siguiente;
    }
}
