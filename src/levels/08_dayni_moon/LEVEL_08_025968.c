extern char *func_024EF0(void);

int func_025968(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024EF0() + 0x38) != 0;
}
