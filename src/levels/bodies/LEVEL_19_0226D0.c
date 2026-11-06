extern char *func_021D50(void);

int func_0226D0(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021D50() + 0x38) != 0;
}
