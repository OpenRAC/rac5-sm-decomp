extern char *func_022D78(int, int);

int func_0237F0(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022D78(value, table) + 0x38) != 0;
}
