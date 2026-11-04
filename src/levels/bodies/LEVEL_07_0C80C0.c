extern unsigned char D_00214ED0[];
extern int D_00214EA4;
extern int D_00214EA8;

void func_135D90(void);

void func_0C80C0(void)
{
    if (D_00214ED0[0] != 0)
    {
        func_135D90();
    }
    D_00214ED0[0] = 0;
    D_00214EA4 = 0;
    D_00214EA8 = 0;
}
