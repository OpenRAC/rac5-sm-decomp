extern int D_001E332C[];
extern int g_AspectRatioID;

void func_026AA8(void);

void func_026830(void)
{
    int *p = *(int **)D_001E332C;

    g_AspectRatioID = p[8];
    func_026AA8();
}
