extern int func_03C268(void);

int func_03C298(char *record)
{
    if (func_03C268() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
