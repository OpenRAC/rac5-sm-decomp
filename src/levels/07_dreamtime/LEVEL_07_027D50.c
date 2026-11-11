extern int D_002082AC[];
extern int g_AspectRatioID;

void func_027FC8(void);

void func_027D50(void)
{
    int *p = *(int **)D_002082AC;

    g_AspectRatioID = p[8];
    func_027FC8();
}
