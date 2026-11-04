extern char D_001DA44C[];

int func_124558(void)
{
    int *p = *(int *)D_001DA44C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
