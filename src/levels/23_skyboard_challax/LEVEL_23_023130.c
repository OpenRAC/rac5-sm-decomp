extern char *func_022710(void);

int func_023130(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022710() + 0x38) != 0;
}
