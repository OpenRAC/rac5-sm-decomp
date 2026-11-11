/* LEVEL_09:0x18CEE8 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001DDDAC;
extern int func_084940(int a0);
extern int func_0B96B0(int a, int b);

void func_18CEE8(void)
{
    int m = func_084940(2);

    if ((D_001DDDAC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0B96B0(0x12, 0);
    }
}
