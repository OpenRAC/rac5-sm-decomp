
int *func_11A248(unsigned int value);

int func_11A410(unsigned int value)
{
    int *p = func_11A248(value);

    if (p != 0)
        return p[1];
    return 0;
}
