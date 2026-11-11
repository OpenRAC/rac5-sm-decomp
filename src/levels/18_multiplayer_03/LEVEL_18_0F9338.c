
int *func_0F9170(unsigned int value);

int func_0F9338(unsigned int value)
{
    int *p = func_0F9170(value);

    if (p != 0)
        return p[1];
    return 0;
}
