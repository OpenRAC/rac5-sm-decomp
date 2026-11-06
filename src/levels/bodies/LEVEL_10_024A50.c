extern char *func_023FD8(void);

int func_024A50(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023FD8() + 0x38) != 0;
}
