extern char D_001B4B5C[];

int func_10FC58(int unused)
{
    int *p = *(int *)D_001B4B5C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
