extern char D_0021B34C[];

int func_135EF8(void)
{
    int *p = *(int *)D_0021B34C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}
