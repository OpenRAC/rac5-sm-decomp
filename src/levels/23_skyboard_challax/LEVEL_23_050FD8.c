extern unsigned char D_00206390[];
extern unsigned char D_001C7C34;

void func_050FD8(char *item)
{
    *(int *)D_00206390 = 0;
    D_001C7C34 = 0;
    D_00206390[0x20] = 0;
    D_00206390[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
