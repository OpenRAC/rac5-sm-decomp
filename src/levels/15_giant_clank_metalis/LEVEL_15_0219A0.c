extern int D_00148C2C[];
extern int g_AspectRatioID;

void func_021C18(void);

void func_0219A0(void)
{
    int *p = *(int **)D_00148C2C;

    g_AspectRatioID = p[8];
    func_021C18();
}
