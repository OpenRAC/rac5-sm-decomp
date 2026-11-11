extern unsigned char D_001EBB40[];
extern unsigned char D_001A37D4;

void func_04F270(char *item)
{
    *(int *)D_001EBB40 = 0;
    D_001A37D4 = 0;
    D_001EBB40[0x20] = 0;
    D_001EBB40[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
