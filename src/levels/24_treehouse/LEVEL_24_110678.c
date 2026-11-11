
int *func_1104B0(unsigned int value);

int func_110678(unsigned int value)
{
    int *p = func_1104B0(value);

    if (p != 0)
        return p[1];
    return 0;
}
