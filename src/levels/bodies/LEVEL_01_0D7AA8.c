/* LEVEL_01:0x0D7AA8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0020671C;
extern int D_00206720;
extern int D_0020672C;
extern int D_00206738;
extern void func_0B6020(int a0);

void func_0D7AA8(int a0)
{
    int v;

    v = D_00206738;
    D_0020672C = 0;
    if (v != 0 && a0 == 0) {
        func_0B6020(7);
    }
    D_00206738 = 0;
    D_0020671C = 0;
    D_00206720 = 0;
}
