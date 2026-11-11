extern char *func_01EE10(unsigned int a0, int a1);

int func_01F738(int value, int sub)
{
    if (value == 12)
        return 0;
    return *(int *)(func_01EE10(value, sub) + 0x38) != 0;
}
