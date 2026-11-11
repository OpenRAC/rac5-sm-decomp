
int *func_0FA938(unsigned int value);

int func_0FAB00(unsigned int value)
{
    int *p = func_0FA938(value);

    if (p != 0)
        return p[1];
    return 0;
}
