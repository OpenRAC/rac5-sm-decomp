extern int D_001A1AB4[];
extern int g_AspectRatioID;

void func_025988(void);

void func_025710(void)
{
    int *p = *(int **)D_001A1AB4;

    g_AspectRatioID = p[8];
    func_025988();
}
