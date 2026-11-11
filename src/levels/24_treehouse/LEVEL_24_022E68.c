extern char *func_022448(void);

int func_022E68(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022448() + 0x38) != 0;
}
