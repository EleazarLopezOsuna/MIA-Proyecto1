#include "cm_exec.h"\

cm_exec::cm_exec()
{

}

void cm_exec::ejecutar(){
    if(path == ""){
        cout<<"Los parametros obligatorios no se han completado";
    }else{
        path.erase(std::remove(path.begin(), path.end(), '"'), path.end());
        std::ifstream input(path.c_str());
        for( std::string line; getline( input, line ); )
        {
            YY_BUFFER_STATE buffer = yy_scan_string(line.c_str());

            if(yyparse()==0){
                printf("\n\n\n");
            }else {
                printf("\n\nExisten errores de Compilacion\n\n");
            }
        }
    }
}
