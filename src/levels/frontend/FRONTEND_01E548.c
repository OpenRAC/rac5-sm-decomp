
int *func_01E380(unsigned int value);

int func_01E548(unsigned int value)
{
    int *p = func_01E380(value);

    if (p != 0)
        return p[1];
    return 0;
}
