extern unsigned char D_00204E10[];
extern unsigned char D_001C54B4;

void func_050DF0(char *item)
{
    *(int *)D_00204E10 = 0;
    D_001C54B4 = 0;
    D_00204E10[0x20] = 0;
    D_00204E10[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
