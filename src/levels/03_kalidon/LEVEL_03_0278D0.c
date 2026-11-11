extern int D_0020C62C[];
extern int g_AspectRatioID;

void func_027B48(void);

void func_0278D0(void)
{
    int *p = *(int **)D_0020C62C;

    g_AspectRatioID = p[8];
    func_027B48();
}
