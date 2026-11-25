extern char *func_024540(int, int);

int func_024FB8(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024540(value, table) + 0x38) != 0;
}
