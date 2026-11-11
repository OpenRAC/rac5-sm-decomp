/* LEVEL_23:0x17A6A0 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001C73AC;
extern int func_07DE48(int a0);
extern int func_0B3198(int a, int b);

void func_17A6A0(void)
{
    int m = func_07DE48(2);

    if ((D_001C73AC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0B3198(0x12, 0);
    }
}
