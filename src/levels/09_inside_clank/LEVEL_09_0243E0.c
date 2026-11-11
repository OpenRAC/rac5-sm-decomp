extern char *func_023968(void);

int func_0243E0(int value)
{
    if (value == 12)
        return 0;
    return *(int *)(func_023968() + 0x38) != 0;
}
