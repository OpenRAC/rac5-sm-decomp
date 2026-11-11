extern long long func_10FB10(void);
extern void func_10FBD8(void);
extern int D_001BBB98;

int func_11F450(void)
{
    if (func_10FB10() != 0) {
        func_10FBD8();
        D_001BBB98 = 0;
    }
    return D_001BBB98 != 0;
}
