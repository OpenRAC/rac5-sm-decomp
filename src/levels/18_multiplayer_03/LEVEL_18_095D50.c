extern int func_095E38(void);

int func_095D50(char *record)
{
    return (func_095E38() >> 1) + *(int *)(record + 4);
}
