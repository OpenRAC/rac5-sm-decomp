
int *func_11A248(void);

int func_11A410(void)
{
    int *p = func_11A248();

    if (p != 0)
        return p[1];
    return 0;
}
