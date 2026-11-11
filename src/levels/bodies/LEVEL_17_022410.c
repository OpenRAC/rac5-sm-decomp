extern char *func_021A90(unsigned int a0, int a1);

int func_022410(int value, int sub)
{
    if (value == 12)
        return 0;
    return *(int *)(func_021A90(value, sub) + 0x38) != 0;
}
