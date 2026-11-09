/* LEVEL_20:0x016CF0 -- placement copy of LEVEL_16_018F38.c: runs a one-time setup once per flag, choosing one of two helper paths from a global state word. */

extern unsigned char D_000FD58D[];
extern int D_00131510;
extern int D_0011E238;

extern void func_0F39A0(void);
extern int func_0E28F8(void);
extern void func_095D38(int a0, int a1);
extern void func_016950(int a0, int a1);

void func_016CF0(void)
{
    int v;

    if (D_000FD58D[0] != 0) {
        return;
    }
    v = D_00131510;
    D_000FD58D[0] = 1;
    if (v == 0x14) {
        func_0F39A0();
        func_0E28F8();
        D_0011E238 = 1;
        func_095D38(0x33, 0);
    } else {
        func_016950(4, 0);
    }
}
