extern int D_001A2F34[];
extern int g_AspectRatioID;

void func_024F38(void);

void func_024CC0(void)
{
    int *p = *(int **)D_001A2F34;

    g_AspectRatioID = p[8];
    func_024F38();
}
