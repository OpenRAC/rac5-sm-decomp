extern unsigned char D_00242310[];
extern unsigned char D_001FD834;

void func_056568(char *item)
{
    *(int *)D_00242310 = 0;
    D_001FD834 = 0;
    D_00242310[0x20] = 0;
    D_00242310[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
