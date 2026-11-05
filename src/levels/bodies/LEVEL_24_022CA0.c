extern char * func_022400(void);

int func_022CA0(void)
{
    return *(int *)(func_022400() + 0x54) != 0;
}
