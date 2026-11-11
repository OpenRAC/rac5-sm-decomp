extern char D_0021F6CC[];

int func_1311A8(int unused)
{
    int *p = *(int *)D_0021F6CC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
