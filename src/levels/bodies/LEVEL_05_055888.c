extern unsigned char D_00224C10[];
extern unsigned char D_001E3BB4;

void func_055888(char *item)
{
    *(int *)D_00224C10 = 0;
    D_001E3BB4 = 0;
    D_00224C10[0x20] = 0;
    D_00224C10[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
