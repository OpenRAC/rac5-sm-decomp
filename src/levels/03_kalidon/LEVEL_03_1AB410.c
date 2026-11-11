/* LEVEL_03:0x1AB410 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_0020C62C;
extern int func_087DE0(int a0);
extern int func_0BC1E8(int a, int b);

void func_1AB410(void)
{
    int m = func_087DE0(2);

    if ((D_0020C62C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0BC1E8(0x12, 0);
    }
}
