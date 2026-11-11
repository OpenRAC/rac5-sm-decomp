extern char *func_021D50(unsigned int a0, int a1);

int func_0226D0(int value, int sub)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021D50(value, sub) + 0x38) != 0;
}
