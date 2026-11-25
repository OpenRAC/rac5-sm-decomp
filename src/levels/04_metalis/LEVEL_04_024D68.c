extern char *func_0242F0(int, int);

int func_024D68(int value, int table)
{
    if (value == 12)
        return 0;
    return *(int *)(func_0242F0(value, table) + 0x38) != 0;
}
