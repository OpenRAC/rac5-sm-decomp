extern int func_0268B0(void);
extern int D_001FBAE0[];
int func_026FC0(void)
{
    int value = func_0268B0();
    int selected = value < 2 ? value : 1;
    return D_001FBAE0[selected];
}