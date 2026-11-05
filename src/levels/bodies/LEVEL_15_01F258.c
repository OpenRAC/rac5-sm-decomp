extern char * func_01E990(void);

int func_01F258(void)
{
    return *(int *)(func_01E990() + 0x54) == 2;
}
