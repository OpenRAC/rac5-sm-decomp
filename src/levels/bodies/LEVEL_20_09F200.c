extern unsigned char D_00111328[];
extern int D_001112FC;
extern int D_00111300;

extern int func_0E29E0(void);

void func_09F200(void)
{
    if (D_00111328[0] != 0)
    {
        func_0E29E0();
    }
    D_00111328[0] = 0;
    D_001112FC = 0;
    D_00111300 = 0;
}
