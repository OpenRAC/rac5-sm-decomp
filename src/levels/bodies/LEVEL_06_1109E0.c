
int *func_110818(unsigned int value);

int func_1109E0(unsigned int value)
{
    int *p = func_110818(value);

    if (p != 0)
        return p[1];
    return 0;
}
