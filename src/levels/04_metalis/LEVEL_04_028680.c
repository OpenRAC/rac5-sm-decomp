extern int func_027F68(void);
extern int D_002265E0[];
int func_028680(void)
{
    int value = func_027F68();
    int selected = value < 2 ? value : 1;
    return D_002265E0[selected];
}