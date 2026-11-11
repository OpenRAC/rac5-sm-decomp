
int *func_118460(unsigned int value);

int func_118628(unsigned int value)
{
    int *p = func_118460(value);

    if (p != 0)
        return p[1];
    return 0;
}
