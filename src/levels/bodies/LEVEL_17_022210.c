extern char * func_021A48(void);

int func_022210(void)
{
    return *(int *)(func_021A48() + 0x50) != 0;
}
