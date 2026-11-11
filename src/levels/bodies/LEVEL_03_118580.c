
int *func_1183B8(unsigned int value);

int func_118580(unsigned int value)
{
    int *p = func_1183B8(value);

    if (p != 0)
        return p[1];
    return 0;
}
