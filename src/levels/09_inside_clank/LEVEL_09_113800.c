
int *func_113638(unsigned int value);

int func_113800(unsigned int value)
{
    int *p = func_113638(value);

    if (p != 0)
        return p[1];
    return 0;
}
