
int *func_12A9E8(unsigned int value);

int func_12ABB0(unsigned int value)
{
    int *p = func_12A9E8(value);

    if (p != 0)
        return p[1];
    return 0;
}
