/* LEVEL_06:0x0180E8 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_0021E128;
extern void func_027A38();
extern int func_028250();
extern void func_025578(unsigned int g, int arg);
extern void func_025758();
extern void func_0D1D40();

void func_0180E8(void)
{
    func_027A38();
    func_028250();
    func_025578(D_0021E128 + 0x3C0, 0);
    func_025758(D_0021E128 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_018140(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D1D40(4, 0x30D, 0x21A);
}
