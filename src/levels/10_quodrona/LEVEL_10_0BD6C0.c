extern long long func_0BD6B0(void);
extern unsigned int D_00331E30[];

void func_0BD6C0(void)
{
    if (func_0BD6B0() != 0) {
        D_00331E30[2]--;
        if (D_00331E30[2] == 0) D_00331E30[0] = 3;
    }
    if (D_00331E30[3] != 0) {
        if (D_00331E30[3] != 0xffffffffu) D_00331E30[3]--;
    }
}
