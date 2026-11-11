/* LEVEL_09:0x0D8168 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_0264B8(int a, int b);
extern int func_12BD48(int a);
extern int func_019C58(int a);
extern int func_0B8FE0(void);
extern void func_0264D8(int a, int b, int c);
extern int func_0D46F0(int key, int state, int arg);
extern unsigned char D_001F0548[];

void func_0D8168(void)
{
    if (func_0264B8(0x91, 0) != 0) {
        return;
    }
    if (func_12BD48(0) != 3) {
        return;
    }
    if (func_019C58(6) != 0) {
        if (func_0B8FE0() == 0x38) {
            return;
        }
    }
    func_0264D8(0x91, 1, 0);
    func_0D46F0(3, 0xA1D, 0x21A);
    D_001F0548[0] = 1;
}
