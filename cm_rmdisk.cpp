#include "cm_rmdisk.h"

cm_rmdisk::cm_rmdisk()
{

}

void cm_rmdisk::ejecutar(){
    if(path == ""){
        cout<<"Los parametros obligatorios no se han completado"<<endl;
    }else{
        if (path.find("\"") != std::string::npos) {
            path = path.erase(0,1);
            path = path.erase(strlen(path.c_str()) - 1, 1);
        }
        if (fopen(path.c_str(), "r")) {
                cout<<"Presione Y para eliminar el archivo "<<path<<endl;
                int confirmacion = getchar();
                if(confirmacion == 121 || confirmacion == 89){
                    if( remove(path.c_str()) != 0 )
                        cout<<"Error al eliminar el disco";
                      else
                        cout<<"Disco eliminado correctamente";
                }else{
                    cout<<"El disco no sera eliminado";
                }
            } else {
                cout<<"El disco no existe";
            }
    }
}
