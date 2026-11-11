extern int func_03BCF8(void);

int func_03BD08(char *record)
{
    if (func_03BCF8() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
