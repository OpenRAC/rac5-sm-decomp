extern int func_096E28(void);

int func_096D40(char *record)
{
    return (func_096E28() >> 1) + *(int *)(record + 4);
}
