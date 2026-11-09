/* LEVEL_09:0x018CA8 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_00218B28;
extern void func_0284B8();
extern int func_028CD0();
extern void func_0260D0();
extern void func_0262B0();
extern void func_0D46F0();

void func_018CA8(void)
{
    func_0284B8();
    func_028CD0();
    func_0260D0(D_00218B28 + 0x3C0, 0);
    func_0262B0(D_00218B28 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_018D00(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D46F0(4, 0x30D, 0x21A);
}
