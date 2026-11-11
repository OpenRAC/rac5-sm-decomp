extern unsigned char D_0018AB10[];
extern unsigned char D_00153BB4;

void func_04D4A8(char *item)
{
    *(int *)D_0018AB10 = 0;
    D_00153BB4 = 0;
    D_0018AB10[0x20] = 0;
    D_0018AB10[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
