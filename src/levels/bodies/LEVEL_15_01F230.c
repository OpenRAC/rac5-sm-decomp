extern char * func_01E990(void);

int func_01F230(void)
{
    return *(int *)(func_01E990() + 0x54) != 0;
}
