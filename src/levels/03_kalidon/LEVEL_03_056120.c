extern unsigned char D_00253D90[];
extern unsigned char D_0020CEB4;

void func_056120(char *item)
{
    *(int *)D_00253D90 = 0;
    D_0020CEB4 = 0;
    D_00253D90[0x20] = 0;
    D_00253D90[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
