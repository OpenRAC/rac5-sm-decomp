/* LEVEL_03:0x0DACA0 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_027390(int a, int b);
extern int func_131178(int a);
extern int func_01A5D0(int a);
extern int func_0BBB18(void);
extern void func_0273B0(int a, int b, int c);
extern void func_0D7228(int a, int b, int c);
extern unsigned char D_0021EDC8[];

void func_0DACA0(void)
{
    if (func_027390(0x91, 0) != 0) {
        return;
    }
    if (func_131178(0) != 3) {
        return;
    }
    if (func_01A5D0(6) != 0) {
        if (func_0BBB18() == 0x38) {
            return;
        }
    }
    func_0273B0(0x91, 1, 0);
    func_0D7228(3, 0xA1D, 0x21A);
    D_0021EDC8[0] = 1;
}
