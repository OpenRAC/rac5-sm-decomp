extern char D_001A815C[];

int func_10F268(void)
{
    int *p = *(int *)D_001A815C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}
