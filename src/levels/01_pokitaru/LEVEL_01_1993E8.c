/* LEVEL_01:0x1993E8 -- asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001F3FAC;
extern int func_087F88(int a0);
extern int func_0BC400(int a, int b);

void func_1993E8(void)
{
    int m = func_087F88(2);

    if ((D_001F3FAC->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0BC400(0x12, 0);
    }
}
