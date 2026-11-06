extern char *func_022110(void);

int func_022A90(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_022110() + 0x38) != 0;
}
