extern char *func_024670(void);

int func_0250E8(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024670() + 0x38) != 0;
}
