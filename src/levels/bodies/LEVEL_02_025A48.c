extern char *func_024FD0(void);

int func_025A48(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024FD0() + 0x38) != 0;
}
