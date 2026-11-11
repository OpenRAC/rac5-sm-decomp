/* LEVEL_07:0x019FA8 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_00246CA8;
extern void func_029990();
extern int func_02A1A8();
extern void func_027428(unsigned int g, int arg);
extern void func_027608();
extern int func_0D94A0(int key, int state, int arg);

void func_019FA8(void)
{
    func_029990();
    func_02A1A8();
    func_027428(D_00246CA8 + 0x3C0, 0);
    func_027608(D_00246CA8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_01A000(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D94A0(4, 0x30D, 0x21A);
}
