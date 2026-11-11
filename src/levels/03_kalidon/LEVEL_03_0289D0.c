extern int func_0281E0(void);
extern int D_00225B60[];
int func_0289D0(void)
{
    int value = func_0281E0();
    int selected = value < 2 ? value : 1;
    return D_00225B60[selected];
}