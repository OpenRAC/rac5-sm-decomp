/* LEVEL_24:0x179BD8 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001C4C2C;
extern int func_081228(int a0);
extern int func_0B5CC0(int a, int b);

void func_179BD8(void)
{
    int m = func_081228(2);

    if ((D_001C4C2C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0B5CC0(0x12, 0);
    }
}
