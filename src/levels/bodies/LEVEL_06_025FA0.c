extern int D_001E2EAC[];
extern int g_AspectRatioID;

void func_026218(void);

void func_025FA0(void)
{
    int *p = *(int **)D_001E2EAC;

    g_AspectRatioID = p[8];
    func_026218();
}
