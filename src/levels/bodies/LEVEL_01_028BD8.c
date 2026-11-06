extern int func_028300(void);
extern int D_0020CC60[];
int func_028BD8(void)
{
    int value = func_028300();
    int selected = value < 2 ? value : 1;
    return D_0020CC60[selected];
}