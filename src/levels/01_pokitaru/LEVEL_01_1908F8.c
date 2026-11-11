extern int func_01A490(int);

int func_1908F8(char *record)
{
    int *values = *(int **)(record + 0x54);
    if (values[1] != 0)
        return func_01A490(values[0]);
    return 0;
}
