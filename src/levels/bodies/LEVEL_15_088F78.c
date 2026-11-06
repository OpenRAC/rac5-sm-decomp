extern int func_089060(void);

int func_088F78(char *record)
{
    return (func_089060() >> 1) + *(int *)(record + 4);
}
