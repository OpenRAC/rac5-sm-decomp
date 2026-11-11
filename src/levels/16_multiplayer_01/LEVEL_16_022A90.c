extern char *func_022110(unsigned int a0, int a1);

int func_022A90(int value, int sub)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022110(value, sub) + 0x38) != 0;
}
