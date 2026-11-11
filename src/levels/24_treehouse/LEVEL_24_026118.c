extern int func_025B38(void);
extern int D_001DD9E0[];
int func_026118(void)
{
    int value = func_025B38();
    int selected = value < 2 ? value : 1;
    return D_001DD9E0[selected];
}