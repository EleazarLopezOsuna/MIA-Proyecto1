#ifndef STRUCTSREPORTES_H
#define STRUCTSREPORTES_H
#include <time.h>

struct superBloque{
    int s_filesystem_type;
    int s_inodes_count;
    int s_blocks_count;
    int s_free_blocks_count;
    int s_free_inodes_count;
    time_t s_mtime;
    time_t s_umtime;
    int s_mnt_count;
    int s_magic;
    int s_inode_size;
    int s_block_size;
    int s_first_ino;
    int s_first_blo;
    int s_bm_inode_start;
    int s_bm_block_start;
    int s_inode_start;
    int s_block_start;
};

struct inodo{
    int i_uid;
    int l_gid;
    int i_size;
    time_t i_atime;
    time_t i_ctime;
    time_t i_mtime;
    int i_block;
    char i_type;
    int i_perm;
};

struct content{
    char b_name[12];
    int b_inodo;
};

struct carpeta{
    content b_content[4];
};

struct archivo{
    char b_content[64];
};

struct apuntadores{
    int b_pointers[16];
};

struct ebr{
    char part_status;
    char part_fit;
    int part_start;
    int part_size;
    int part_next;
    char part_name[16];
};

struct particion{
    char part_status;
    char part_type;
    char part_fit;
    int part_start;
    int part_size;
    char part_name[16];
};

struct mbr{
    int mbr_size;
    time_t mbr_creacion;
    int mbr_disk_signature;
    char disk_fit;
    particion particion1;
    particion particion2;
    particion particion3;
    particion particion4;
};

class structsReportes
{
public:
    structsReportes();
};

#endif // STRUCTSREPORTES_H
