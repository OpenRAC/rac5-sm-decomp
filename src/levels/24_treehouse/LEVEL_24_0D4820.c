/* LEVEL_24:0x0D4820 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_024DE0(int a, int b);
extern int func_1288B0(int a);
extern int func_018E58(int a);
extern int func_0B55F0(void);
extern void func_024E00(int a, int b, int c);
extern int func_0D0DA8(int key, int state, int arg);
extern unsigned char D_001D73C8[];

void func_0D4820(void)
{
    if (func_024DE0(0x91, 0) != 0) {
        return;
    }
    if (func_1288B0(0) != 3) {
        return;
    }
    if (func_018E58(6) != 0) {
        if (func_0B55F0() == 0x38) {
            return;
        }
    }
    func_024E00(0x91, 1, 0);
    func_0D0DA8(3, 0xA1D, 0x21A);
    D_001D73C8[0] = 1;
}
