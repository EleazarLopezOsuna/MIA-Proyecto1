#include "cm_mkdisk.h"

cm_mkdisk::cm_mkdisk(){
    u = 'M';
    f = 'F';
    size = -1;
}

void cm_mkdisk::ejecutar(){
    path.erase(std::remove(path.begin(), path.end(), '"'), path.end());
    cout<<path;
    if(path == "" || size == -1){
        cout<<"Los parametros obligatorios no se han completado"<<endl;
    }else{
        mbrDisco = new mbr;
        mbrDisco->disk_fit = f;
        mbrDisco->mbr_creacion = time(0);
        srand((unsigned) time(0));
        mbrDisco->mbr_disk_signature = (rand() % 1000) + 1;
        crearDisco();
    }
}

void cm_mkdisk::crearDisco(){
    FILE *archivo;
    archivo = fopen(path.c_str(), "wb");
    if(archivo == NULL)
        exit(1);

    char buffer[1024];

    if(u == 'K'){
        mbrDisco->mbr_size = size * 1024;
        for(int i=0; i < 1024; i++)
            buffer[i] = '\0';
        for(int i=0; i < size; i++)
            fwrite(&buffer, 1024, 1, archivo);

        fclose(archivo);
    }else if(u == 'M'){
        mbrDisco->mbr_size = size * 1024 * 1024;
        for(int i = 0 ; i < 1024 ; i++)
            buffer[i]='\0';
        for(int i = 0 ; i < (size*1024) ; i++)
            fwrite(&buffer,1024,1,archivo);

        fclose(archivo);
    }

    particion vacia;
    vacia.part_fit = '-';
    vacia.part_size = 0;
    vacia.part_start = -1;
    vacia.part_status = '0';
    vacia.part_type = '-';
    vacia.part_name[0] = '\0';

    mbrDisco->particion1 = vacia;
    mbrDisco->particion2 = vacia;
    mbrDisco->particion3 = vacia;
    mbrDisco->particion4 = vacia;

    archivo = fopen(path.c_str(), "rb+");

    if(archivo != NULL){
        fseek(archivo, 0, SEEK_SET);
        fwrite(mbrDisco, sizeof(mbr), 1, archivo);
        fclose(archivo);
    }

    archivo=fopen(path.c_str(),"rb+");
    mbr prueba;
    fseek(archivo, 0, SEEK_SET);
    fread(&prueba, sizeof(mbr), 1, archivo);
    fclose(archivo);
}
