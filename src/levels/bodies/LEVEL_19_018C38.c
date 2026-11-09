/* LEVEL_19:0x018C38 -- placement copy of LEVEL_16_018F38.c: runs a one-time setup once per flag, choosing one of two helper paths from a global state word. */

extern unsigned char D_0019C025[];
extern int D_001D16A0;
extern int D_001BCD10;

extern void func_122208(void);
extern int func_1101B0(void);
extern void func_0AB0E0(int a0, int a1);
extern void func_018898(int a0, int a1);

void func_018C38(void)
{
    int v;

    if (D_0019C025[0] != 0) {
        return;
    }
    v = D_001D16A0;
    D_0019C025[0] = 1;
    if (v == 0x14) {
        func_122208();
        func_1101B0();
        D_001BCD10 = 1;
        func_0AB0E0(0x33, 0);
    } else {
        func_018898(4, 0);
    }
}
