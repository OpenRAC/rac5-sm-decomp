/* LEVEL_06:0x0D57B8 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_025960(int a, int b);
extern int func_129480(int a);
extern int func_019068(int a);
extern int func_0B6630(void);
extern void func_025980(int a, int b, int c);
extern void func_0D1D40(int a, int b, int c);
extern unsigned char D_001F5648[];

void func_0D57B8(void)
{
    if (func_025960(0x91, 0) != 0) {
        return;
    }
    if (func_129480(0) != 3) {
        return;
    }
    if (func_019068(6) != 0) {
        if (func_0B6630() == 0x38) {
            return;
        }
    }
    func_025980(0x91, 1, 0);
    func_0D1D40(3, 0xA1D, 0x21A);
    D_001F5648[0] = 1;
}
