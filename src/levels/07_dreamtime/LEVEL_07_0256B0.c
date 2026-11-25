extern char *func_024C38(int, int);

int func_0256B0(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024C38(value, table) + 0x38) != 0;
}
