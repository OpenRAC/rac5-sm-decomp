extern int func_0A2010(void);

int func_0A1F28(char *record)
{
    return (func_0A2010() >> 1) + *(int *)(record + 4);
}
