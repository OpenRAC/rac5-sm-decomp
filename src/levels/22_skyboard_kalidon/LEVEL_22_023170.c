extern int func_022B98(void);
extern int D_0016A0E0[];
int func_023170(void)
{
    int value = func_022B98();
    int selected = value < 2 ? value : 1;
    return D_0016A0E0[selected];
}