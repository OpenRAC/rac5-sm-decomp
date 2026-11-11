extern int D_001FCFAC[];
extern int g_AspectRatioID;

void func_027548(void);

void func_0272D0(void)
{
    int *p = *(int **)D_001FCFAC;

    g_AspectRatioID = p[8];
    func_027548();
}
