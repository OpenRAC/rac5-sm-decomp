extern int D_001950B4[];
extern int g_AspectRatioID;

void func_025308(void);

void func_025090(void)
{
    int *p = *(int **)D_001950B4;

    g_AspectRatioID = p[8];
    func_025308();
}
