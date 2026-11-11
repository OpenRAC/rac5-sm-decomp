extern int func_096320(void);

int func_096238(char *record)
{
    return (func_096320() >> 1) + *(int *)(record + 4);
}
