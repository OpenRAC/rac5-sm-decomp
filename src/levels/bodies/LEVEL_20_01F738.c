extern char *func_01EE10(void);

int func_01F738(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01EE10() + 0x38) != 0;
}
