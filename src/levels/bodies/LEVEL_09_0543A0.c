extern unsigned char D_00220690[];
extern unsigned char D_001DE634;

void func_0543A0(char *item)
{
    *(int *)D_00220690 = 0;
    D_001DE634 = 0;
    D_00220690[0x20] = 0;
    D_00220690[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
