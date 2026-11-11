extern unsigned char D_00238F10[];
extern unsigned char D_001F4834;

void func_057CB0(char *item)
{
    *(int *)D_00238F10 = 0;
    D_001F4834 = 0;
    D_00238F10[0x20] = 0;
    D_00238F10[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
