extern char *D_001B5CDC;

int func_110480(void)
{
    char *p = D_001B5CDC;
    if (p != 0)
        return *(int *)(p + 0xb0);
    return 0;
}
