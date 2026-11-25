extern char *func_024670(int, int);

int func_0250E8(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024670(value, table) + 0x38) != 0;
}
