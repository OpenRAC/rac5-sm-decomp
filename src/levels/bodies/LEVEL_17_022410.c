extern char *func_021A90(void);

int func_022410(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021A90() + 0x38) != 0;
}
