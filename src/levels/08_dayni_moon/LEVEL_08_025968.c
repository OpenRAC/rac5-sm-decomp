extern char *func_024EF0(int, int);

int func_025968(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024EF0(value, table) + 0x38) != 0;
}
