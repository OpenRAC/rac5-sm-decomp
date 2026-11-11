
int *func_11D298(unsigned int value);

int func_11D460(unsigned int value)
{
    int *p = func_11D298(value);

    if (p != 0)
        return p[1];
    return 0;
}
