extern char * func_01EDC8(void);

int func_01F5B8(void)
{
    return *(int *)(func_01EDC8() + 0x50) == 2;
}
