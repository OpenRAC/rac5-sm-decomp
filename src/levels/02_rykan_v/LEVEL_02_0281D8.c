extern int D_00208C2C[];
extern int g_AspectRatioID;

void func_028450(void);

void func_0281D8(void)
{
    int *p = *(int **)D_00208C2C;

    g_AspectRatioID = p[8];
    func_028450();
}
