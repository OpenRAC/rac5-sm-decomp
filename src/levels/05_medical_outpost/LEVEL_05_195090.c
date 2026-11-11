/* LEVEL_05:0x195090 -- placement copy of LEVEL_01_1993E8.c: asks the input state and, when the mode-dependent mask hits, runs the follow-up action with id 0x12. */
struct Cfg {
    char pad00[0x24];
    int f24;
};

extern struct Cfg *D_001E332C;
extern int func_0858E0(int a0);
extern int func_0BA9A8(int a, int b);

void func_195090(void)
{
    int m = func_0858E0(2);

    if ((D_001E332C->f24 == 2) ? (m & 0x2200) : (m & 0x2000)) {
        func_0BA9A8(0x12, 0);
    }
}
