extern int func_026030(void);
extern int D_001DFDE0[];
int func_026748(void)
{
    int value = func_026030();
    int selected = value < 2 ? value : 1;
    return D_001DFDE0[selected];
}