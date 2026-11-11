extern unsigned char D_002881A0[];
extern unsigned char D_0023D6F4;

void func_05CFC8(char *item)
{
    *(int *)D_002881A0 = 0;
    D_0023D6F4 = 0;
    D_002881A0[0x20] = 0;
    D_002881A0[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
