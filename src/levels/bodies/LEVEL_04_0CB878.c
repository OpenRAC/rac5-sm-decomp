extern unsigned char D_0021A090[];
extern int D_0021A064;
extern int D_0021A068;

void func_13F210(void);

void func_0CB878(void)
{
    if (D_0021A090[0] != 0)
    {
        func_13F210();
    }
    D_0021A090[0] = 0;
    D_0021A064 = 0;
    D_0021A068 = 0;
}
