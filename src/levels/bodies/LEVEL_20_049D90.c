extern unsigned char D_001430F0[];
extern unsigned char D_00104A34;

void func_049D90(char *item)
{
    *(int *)D_001430F0 = 0;
    D_00104A34 = 0;
    D_001430F0[0x20] = 0;
    D_001430F0[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
