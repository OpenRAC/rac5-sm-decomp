extern unsigned char D_00225C90[];
extern unsigned char D_001E3734;

void func_054560(char *item)
{
    *(int *)D_00225C90 = 0;
    D_001E3734 = 0;
    D_00225C90[0x20] = 0;
    D_00225C90[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
