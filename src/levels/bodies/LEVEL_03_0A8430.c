extern int func_0A8518(void);

int func_0A8430(char *record)
{
    return (func_0A8518() >> 1) + *(int *)(record + 4);
}
