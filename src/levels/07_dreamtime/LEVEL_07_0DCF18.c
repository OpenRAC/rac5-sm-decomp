/* LEVEL_07:0x0DCF18 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_027810(int a, int b);
extern int func_135DB0(int a);
extern int func_01AF28(int a);
extern int func_0BDD90(void);
extern void func_027830(int a, int b, int c);
extern int func_0D94A0(int key, int state, int arg);
extern unsigned char D_0021AA48[];

void func_0DCF18(void)
{
    if (func_027810(0x91, 0) != 0) {
        return;
    }
    if (func_135DB0(0) != 3) {
        return;
    }
    if (func_01AF28(6) != 0) {
        if (func_0BDD90() == 0x38) {
            return;
        }
    }
    func_027830(0x91, 1, 0);
    func_0D94A0(3, 0xA1D, 0x21A);
    D_0021AA48[0] = 1;
}
