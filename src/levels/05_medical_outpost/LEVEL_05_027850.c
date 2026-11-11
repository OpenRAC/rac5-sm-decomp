extern int func_027118(void);
extern int D_001FBB60[];
int func_027850(void)
{
    int value = func_027118();
    int selected = value < 2 ? value : 1;
    return D_001FBB60[selected];
}