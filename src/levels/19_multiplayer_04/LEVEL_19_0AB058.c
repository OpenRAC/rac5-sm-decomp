extern long long func_0AB048(void);
extern unsigned int D_00276AF0[];

void func_0AB058(void)
{
    if (func_0AB048() != 0) {
        D_00276AF0[2]--;
        if (D_00276AF0[2] == 0) D_00276AF0[0] = 3;
    }
    if (D_00276AF0[3] != 0) {
        if (D_00276AF0[3] != 0xffffffffu) D_00276AF0[3]--;
    }
}
