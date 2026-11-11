/* LEVEL_10:0x1A1060 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001FCFAC;
extern int func_0882F0(int a0);
extern int func_0BD748(int a, int b);

void func_1A1060(void)
{
    int m = func_0882F0(2);

    if ((D_001FCFAC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0BD748(0x12, 0);
    }
}
