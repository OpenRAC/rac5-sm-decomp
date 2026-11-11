extern unsigned char D_001EB7C0[];
extern unsigned char D_001A2354;

void func_050768(char *item)
{
    *(int *)D_001EB7C0 = 0;
    D_001A2354 = 0;
    D_001EB7C0[0x20] = 0;
    D_001EB7C0[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
