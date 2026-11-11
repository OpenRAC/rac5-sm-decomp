extern int func_028928(void);
extern int D_002568E0[];
int func_029150(void)
{
    int value = func_028928();
    int selected = value < 2 ? value : 1;
    return D_002568E0[selected];
}