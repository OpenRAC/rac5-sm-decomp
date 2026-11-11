extern int func_027308(void);
extern int D_001F6860[];
int func_027A40(void)
{
    int value = func_027308();
    int selected = value < 2 ? value : 1;
    return D_001F6860[selected];
}