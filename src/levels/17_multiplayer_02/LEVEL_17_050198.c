extern unsigned char D_001DCAC0[];
extern unsigned char D_00195954;

void func_050198(char *item)
{
    *(int *)D_001DCAC0 = 0;
    D_00195954 = 0;
    D_001DCAC0[0x20] = 0;
    D_001DCAC0[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
