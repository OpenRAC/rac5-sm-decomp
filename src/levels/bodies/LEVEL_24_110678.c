
int *func_1104B0(void);

int func_110678(void)
{
    int *p = func_1104B0();

    if (p != 0)
        return p[1];
    return 0;
}
