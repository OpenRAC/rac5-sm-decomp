extern char *func_024C38(void);

int func_0256B0(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024C38() + 0x38) != 0;
}
