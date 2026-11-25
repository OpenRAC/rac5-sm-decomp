extern char *func_01E9D8(int, int);

int func_01F3F8(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01E9D8(value, table) + 0x38) != 0;
}
