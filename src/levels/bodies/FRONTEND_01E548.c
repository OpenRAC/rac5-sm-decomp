
int *func_01E380(void);

int func_01E548(void)
{
    int *p = func_01E380();

    if (p != 0)
        return p[1];
    return 0;
}
