
int *func_120590(unsigned int value);

int func_120758(unsigned int value)
{
    int *p = func_120590(value);

    if (p != 0)
        return p[1];
    return 0;
}
