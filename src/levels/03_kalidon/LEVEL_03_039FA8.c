extern int func_039F78(void);

int func_039FA8(char *record)
{
    if (func_039F78() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
