extern char *func_021758(void);

int func_0220D8(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021758() + 0x38) != 0;
}
