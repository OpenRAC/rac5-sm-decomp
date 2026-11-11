extern int D_001F3FAC[];
extern int g_AspectRatioID;

void func_027C68(void);

void func_0279F0(void)
{
    int *p = *(int **)D_001F3FAC;

    g_AspectRatioID = p[8];
    func_027C68();
}
