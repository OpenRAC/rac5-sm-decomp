/* LEVEL_08:0x1CBA68 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_0023CB2C;
extern int func_08FFD8(int a0);
extern int func_0C7320(int a, int b);

void func_1CBA68(void)
{
    int m = func_08FFD8(2);

    if ((D_0023CB2C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0C7320(0x12, 0);
    }
}
