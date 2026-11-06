extern int func_027C08(void);
extern int D_00215BE0[];
int func_0289B0(void)
{
    int value = func_027C08();
    int selected = value < 2 ? value : 1;
    return D_00215BE0[selected];
}