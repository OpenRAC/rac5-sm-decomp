extern int func_028660(void);
extern int D_00221960[];
int func_028F18(void)
{
    int value = func_028660();
    int selected = value < 2 ? value : 1;
    return D_00221960[selected];
}