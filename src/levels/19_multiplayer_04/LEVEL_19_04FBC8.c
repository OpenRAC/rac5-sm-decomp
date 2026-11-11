extern unsigned char D_001EB940[];
extern unsigned char D_001A34D4;

void func_04FBC8(char *item)
{
    *(int *)D_001EB940 = 0;
    D_001A34D4 = 0;
    D_001EB940[0x20] = 0;
    D_001EB940[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
