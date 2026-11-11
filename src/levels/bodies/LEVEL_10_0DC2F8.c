/* LEVEL_10:0x0DC2F8 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_026D90(int a, int b);
extern int func_130C10(int a);
extern int func_019EE8(int a);
extern int func_0BD078(void);
extern void func_026DB0(int a, int b, int c);
extern void func_0D8880(int a, int b, int c);
extern unsigned char D_0020F748[];

void func_0DC2F8(void)
{
    if (func_026D90(0x91, 0) != 0) {
        return;
    }
    if (func_130C10(0) != 3) {
        return;
    }
    if (func_019EE8(6) != 0) {
        if (func_0BD078() == 0x38) {
            return;
        }
    }
    func_026DB0(0x91, 1, 0);
    func_0D8880(3, 0xA1D, 0x21A);
    D_0020F748[0] = 1;
}
