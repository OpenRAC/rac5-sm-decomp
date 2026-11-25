extern char *func_01F4A8(int, int);

int func_01FEC8(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01F4A8(value, table) + 0x38) != 0;
}
