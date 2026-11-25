extern char *func_023608(int, int);

int func_024080(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023608(value, table) + 0x38) != 0;
}
