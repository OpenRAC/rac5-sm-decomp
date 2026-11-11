/* LEVEL_22:0x12D9C0 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_0015332C;
extern int func_0793A0(int a0);
extern int func_0AA8A8(int a, int b);

void func_12D9C0(void)
{
    int m = func_0793A0(2);

    if ((D_0015332C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0AA8A8(0x12, 0);
    }
}
