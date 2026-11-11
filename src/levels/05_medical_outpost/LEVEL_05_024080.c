extern char *func_023608(void);

int func_024080(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023608() + 0x38) != 0;
}
