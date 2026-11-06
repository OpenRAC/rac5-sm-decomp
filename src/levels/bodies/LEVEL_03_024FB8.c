extern char *func_024540(void);

int func_024FB8(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_024540() + 0x38) != 0;
}
