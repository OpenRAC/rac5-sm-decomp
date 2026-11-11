/* LEVEL_18:0x018580 -- placement copy of LEVEL_16_018F38.c: runs a one-time setup once per flag, choosing one of two helper paths from a global state word. */

extern unsigned char D_0019C325[];
extern int D_001D1A20;
extern int D_001BD018;

extern void func_120958(void);
extern int func_10E7C0(void);
extern int func_0AA7E0(int a, int b);
extern void func_0181E0(int a0, int a1);

void func_018580(void)
{
    int v;

    if (D_0019C325[0] != 0) {
        return;
    }
    v = D_001D1A20;
    D_0019C325[0] = 1;
    if (v == 0x14) {
        func_120958();
        func_10E7C0();
        D_001BD018 = 1;
        func_0AA7E0(0x33, 0);
    } else {
        func_0181E0(4, 0);
    }
}
