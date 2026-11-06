extern int func_0221B8(void);
extern int D_001613E0[];
int func_022790(void)
{
    int value = func_0221B8();
    int selected = value < 2 ? value : 1;
    return D_001613E0[selected];
}