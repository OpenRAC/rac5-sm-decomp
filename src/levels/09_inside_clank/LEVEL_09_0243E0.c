extern char *func_023968(int, int);

int func_0243E0(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023968(value, table) + 0x38) != 0;
}
