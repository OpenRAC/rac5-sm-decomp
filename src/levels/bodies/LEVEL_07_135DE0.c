extern char D_0021B34C[];

int func_135DE0(void)
{
    int *p = *(int *)D_0021B34C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
