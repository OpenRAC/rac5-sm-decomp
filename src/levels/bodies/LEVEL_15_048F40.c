extern unsigned char D_00181040[];
extern unsigned char D_001494B4;

void func_048F40(char *item)
{
    *(int *)D_00181040 = 0;
    D_001494B4 = 0;
    D_00181040[0x20] = 0;
    D_00181040[0x21] = 0;
    *(int *)(item + 0xcf0) = 0;
}
