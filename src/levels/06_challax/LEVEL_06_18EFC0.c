/* LEVEL_06:0x18EFC0 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001E2EAC;
extern int func_080E00(int a0);
extern int func_0B6D00(int a, int b);

void func_18EFC0(void)
{
    int m = func_080E00(2);

    if ((D_001E2EAC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0B6D00(0x12, 0);
    }
}
