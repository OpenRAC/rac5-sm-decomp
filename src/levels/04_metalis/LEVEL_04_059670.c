extern unsigned char D_00253720[];
extern unsigned char D_0020DCF4;

void func_059670(char *item)
{
    *(int *)D_00253720 = 0;
    D_0020DCF4 = 0;
    D_00253720[0x20] = 0;
    D_00253720[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
