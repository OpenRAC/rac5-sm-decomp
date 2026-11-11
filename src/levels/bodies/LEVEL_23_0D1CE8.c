/* LEVEL_23:0x0D1CE8 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_025208(int a, int b);
extern int func_124528(int a);
extern int func_019378(int a);
extern int func_0B2AC8(void);
extern void func_025228(int a, int b, int c);
extern void func_0CE270(int a, int b, int c);
extern unsigned char D_001D9B48[];

void func_0D1CE8(void)
{
    if (func_025208(0x91, 0) != 0) {
        return;
    }
    if (func_124528(0) != 3) {
        return;
    }
    if (func_019378(6) != 0) {
        if (func_0B2AC8() == 0x38) {
            return;
        }
    }
    func_025228(0x91, 1, 0);
    func_0CE270(3, 0xA1D, 0x21A);
    D_001D9B48[0] = 1;
}
