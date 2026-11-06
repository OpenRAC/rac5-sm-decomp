extern int func_096DA8(void);

int func_096CC0(char *record)
{
    return (func_096DA8() >> 1) + *(int *)(record + 4);
}
