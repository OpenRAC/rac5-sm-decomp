
int *func_10B7B0(unsigned int value);

int func_10B978(unsigned int value)
{
    int *p = func_10B7B0(value);

    if (p != 0)
        return p[1];
    return 0;
}
