/* LEVEL_07:0x1AA320 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_002082AC;
extern int func_08A058(int a0);
extern int func_0BE460(int a, int b);

void func_1AA320(void)
{
    int m = func_08A058(2);

    if ((D_002082AC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0BE460(0x12, 0);
    }
}
