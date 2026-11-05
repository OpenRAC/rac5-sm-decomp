extern char * func_01F460(void);

int func_01FD00(void)
{
    return *(int *)(func_01F460() + 0x54) != 0;
}
