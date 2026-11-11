extern char *func_021758(unsigned int a0, int a1);

int func_0220D8(int value, int sub)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021758(value, sub) + 0x38) != 0;
}
