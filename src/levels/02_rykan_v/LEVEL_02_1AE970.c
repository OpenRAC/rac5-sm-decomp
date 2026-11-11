/* LEVEL_02:0x1AE970 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_00208C2C;
extern int func_08E8B8(int a0);
extern int func_0C2D10(int a, int b);

void func_1AE970(void)
{
    int m = func_08E8B8(2);

    if ((D_00208C2C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0C2D10(0x12, 0);
    }
}
