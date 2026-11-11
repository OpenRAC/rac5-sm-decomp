/* LEVEL_04:0x1A5180 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_0020D12C;
extern int func_08B220(int a0);
extern int func_0C1C10(int a, int b);

void func_1A5180(void)
{
    int m = func_08B220(2);

    if ((D_0020D12C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0C1C10(0x12, 0);
    }
}
