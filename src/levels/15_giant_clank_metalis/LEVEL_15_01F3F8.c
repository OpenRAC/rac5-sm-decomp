extern char *func_01E9D8(void);

int func_01F3F8(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01E9D8() + 0x38) != 0;
}
