extern int D_001C4C2C[];
extern int g_AspectRatioID;

void func_025598(void);

void func_025320(void)
{
    int *p = *(int **)D_001C4C2C;

    g_AspectRatioID = p[8];
    func_025598();
}
