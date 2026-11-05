extern char * func_01F460(void);

int func_01FD28(void)
{
    return *(int *)(func_01F460() + 0x54) == 2;
}
