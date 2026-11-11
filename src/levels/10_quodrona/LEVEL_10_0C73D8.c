extern unsigned char D_00209BD0[];
extern int D_00209BA4;
extern int D_00209BA8;

extern int func_130BF0(void);

void func_0C73D8(void)
{
    if (D_00209BD0[0] != 0)
    {
        func_130BF0();
    }
    D_00209BD0[0] = 0;
    D_00209BA4 = 0;
    D_00209BA8 = 0;
}
