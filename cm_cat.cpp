#include "cm_cat.h"

cm_cat::cm_cat()
{

}

void cm_cat::insertar(filen* nuevo){
    if(primero == nullptr){
        primero = nuevo;
    }else{
        /*filen* tmp = primero;
        while(tmp->siguiente != nullptr)
            tmp = tmp->siguiente;
        tmp->siguiente = nuevo;*/
        nuevo->siguiente = primero;
        primero = nuevo;
    }
}

void cm_cat::ejecutar(){
    filen* tmp = primero;
    while(tmp != nullptr){
        cout<<tmp->path<<'\n';
        tmp = tmp->siguiente;
    }
}