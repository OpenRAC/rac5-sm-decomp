extern long long func_095CA0(void);
extern unsigned int D_0019A1B0[];

void func_095CB0(void)
{
    if (func_095CA0() != 0) {
        D_0019A1B0[2]--;
        if (D_0019A1B0[2] == 0) D_0019A1B0[0] = 3;
    }
    if (D_0019A1B0[3] != 0) {
        if (D_0019A1B0[3] != 0xffffffffu) D_0019A1B0[3]--;
    }
}
