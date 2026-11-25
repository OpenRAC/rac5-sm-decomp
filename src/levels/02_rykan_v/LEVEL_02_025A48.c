extern char *func_024FD0(int, int);

int func_025A48(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024FD0(value, table) + 0x38) != 0;
}
