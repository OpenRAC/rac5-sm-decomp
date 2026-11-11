extern int D_001DDDAC[];
extern int g_AspectRatioID;

void func_026C70(void);

void func_0269F8(void)
{
    int *p = *(int **)D_001DDDAC;

    g_AspectRatioID = p[8];
    func_026C70();
}
