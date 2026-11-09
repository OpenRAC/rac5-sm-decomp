/* LEVEL_16:0x018F38 -- runs a one-time setup once per flag, choosing one of two helper paths from a global state word. */

extern unsigned char D_0019AEA5[];
extern int D_001D04A0;
extern int D_001BBB98;

extern void func_1218A0(void);
extern int func_10FB10(void);
extern void func_0AB808(int a0, int a1);
extern void func_018B98(int a0, int a1);

void func_018F38(void)
{
    int v;

    if (D_0019AEA5[0] != 0) {
        return;
    }
    v = D_001D04A0;
    D_0019AEA5[0] = 1;
    if (v == 0x14) {
        func_1218A0();
        func_10FB10();
        D_001BBB98 = 1;
        func_0AB808(0x33, 0);
    } else {
        func_018B98(4, 0);
    }
}
