extern long long func_1101B0(void);
extern void func_110278(void);
extern int D_001BCD10;

int func_11FDB8(void)
{
    if (func_1101B0() != 0) {
        func_110278();
        D_001BCD10 = 0;
    }
    return D_001BCD10 != 0;
}
