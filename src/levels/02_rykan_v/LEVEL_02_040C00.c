extern int func_040BF0(void);

int func_040C00(char *record)
{
    if (func_040BF0() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
