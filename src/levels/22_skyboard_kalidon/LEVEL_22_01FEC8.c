extern char *func_01F4A8(void);

int func_01FEC8(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01F4A8() + 0x38) != 0;
}
