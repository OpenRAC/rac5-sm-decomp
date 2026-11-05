extern char * func_022400(void);

int func_022CC8(void)
{
    return *(int *)(func_022400() + 0x54) == 2;
}
