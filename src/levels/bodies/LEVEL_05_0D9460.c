/* LEVEL_05:0x0D9460 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_0261F0(int a, int b);
extern int func_12E728(int a);
extern int func_019E00(int a);
extern int func_0BA2D8(void);
extern void func_026210(int a, int b, int c);
extern void func_0D59E8(int a, int b, int c);
extern unsigned char D_001F5AC8[];

void func_0D9460(void)
{
    if (func_0261F0(0x91, 0) != 0) {
        return;
    }
    if (func_12E728(0) != 3) {
        return;
    }
    if (func_019E00(6) != 0) {
        if (func_0BA2D8() == 0x38) {
            return;
        }
    }
    func_026210(0x91, 1, 0);
    func_0D59E8(3, 0xA1D, 0x21A);
    D_001F5AC8[0] = 1;
}
