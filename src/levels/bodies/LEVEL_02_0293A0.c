extern int func_028AE8(void);
extern int D_00221BE0[];
int func_0293A0(void)
{
    int value = func_028AE8();
    int selected = value < 2 ? value : 1;
    return D_00221BE0[selected];
}