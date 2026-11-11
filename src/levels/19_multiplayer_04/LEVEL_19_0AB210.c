extern int D_00276AF0[];
extern void func_0AB270(void);
extern void func_0AB1B0(void);
extern void func_0AB510(void);

void func_0AB210(void)
{
    if (D_00276AF0[5] == 0 && D_00276AF0[12] == 0) {
        if (D_00276AF0[21] == 0) *((char *)D_00276AF0 + 0x2c) = 0;
    } else {
        func_0AB270();
        func_0AB1B0();
        func_0AB510();
    }
}
