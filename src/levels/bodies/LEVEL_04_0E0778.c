/* LEVEL_04:0x0E0778 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_027140(int a, int b);
extern int func_13F230(int a);
extern int func_01A4E8(int a);
extern int func_0C1540(void);
extern void func_027160(int a, int b, int c);
extern void func_0DCD00(int a, int b, int c);
extern unsigned char D_0021FC08[];

void func_0E0778(void)
{
    if (func_027140(0x91, 0) != 0) {
        return;
    }
    if (func_13F230(0) != 3) {
        return;
    }
    if (func_01A4E8(6) != 0) {
        if (func_0C1540() == 0x38) {
            return;
        }
    }
    func_027160(0x91, 1, 0);
    func_0DCD00(3, 0xA1D, 0x21A);
    D_0021FC08[0] = 1;
}
