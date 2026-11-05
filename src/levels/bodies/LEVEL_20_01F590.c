extern char * func_01EDC8(void);

int func_01F590(void)
{
    return *(int *)(func_01EDC8() + 0x50) != 0;
}
