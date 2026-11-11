extern char D_001F60CC[];

int func_12E758(int unused)
{
    int *p = *(int *)D_001F60CC;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
