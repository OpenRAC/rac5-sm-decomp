extern char *func_022710(int, int);

int func_023130(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022710(value, table) + 0x38) != 0;
}
