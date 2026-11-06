extern int func_0A6D58(void);

int func_0A6C70(char *record)
{
    return (func_0A6D58() >> 1) + *(int *)(record + 4);
}
