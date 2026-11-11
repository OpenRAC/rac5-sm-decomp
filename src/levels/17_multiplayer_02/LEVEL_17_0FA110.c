
int *func_0F9F48(unsigned int value);

int func_0FA110(unsigned int value)
{
    int *p = func_0F9F48(value);

    if (p != 0)
        return p[1];
    return 0;
}
