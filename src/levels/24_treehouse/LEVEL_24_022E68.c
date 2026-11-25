extern char *func_022448(int, int);

int func_022E68(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022448(value, table) + 0x38) != 0;
}
