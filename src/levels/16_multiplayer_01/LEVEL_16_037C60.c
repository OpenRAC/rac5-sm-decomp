extern int func_037C50(void);

int func_037C60(char *record)
{
    if (func_037C50() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
