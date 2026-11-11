
int *func_1257B0(unsigned int value);

int func_125978(unsigned int value)
{
    int *p = func_1257B0(value);

    if (p != 0)
        return p[1];
    return 0;
}
