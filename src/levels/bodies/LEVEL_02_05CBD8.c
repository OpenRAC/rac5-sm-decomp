extern unsigned char D_00250420[];
extern unsigned char D_002097F4;

void func_05CBD8(char *item)
{
    *(int *)D_00250420 = 0;
    D_002097F4 = 0;
    D_00250420[0x20] = 0;
    D_00250420[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
