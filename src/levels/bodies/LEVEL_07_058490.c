extern unsigned char D_0024E810[];
extern unsigned char D_00208B34;

void func_058490(char *item)
{
    *(int *)D_0024E810 = 0;
    D_00208B34 = 0;
    D_0024E810[0x20] = 0;
    D_0024E810[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
