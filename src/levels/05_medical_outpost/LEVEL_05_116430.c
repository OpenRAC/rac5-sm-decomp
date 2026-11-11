
int *func_116268(unsigned int value);

int func_116430(unsigned int value)
{
    int *p = func_116268(value);

    if (p != 0)
        return p[1];
    return 0;
}
