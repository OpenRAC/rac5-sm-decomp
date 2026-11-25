extern char *func_023FD8(int, int);

int func_024A50(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023FD8(value, table) + 0x38) != 0;
}
