
int *func_10B7B0(void);

int func_10B978(void)
{
    int *p = func_10B7B0();

    if (p != 0)
        return p[1];
    return 0;
}
