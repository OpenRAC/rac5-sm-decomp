extern int D_001A2C34[];
extern int g_AspectRatioID;

void func_025530(void);

void func_0252B8(void)
{
    int *p = *(int **)D_001A2C34;

    g_AspectRatioID = p[8];
    func_025530();
}
