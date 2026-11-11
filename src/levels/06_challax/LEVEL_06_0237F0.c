extern char *func_022D78(void);

int func_0237F0(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022D78() + 0x38) != 0;
}
