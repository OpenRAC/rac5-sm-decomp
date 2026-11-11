/* LEVEL_23:0x0184A0 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_001FE828;
extern void func_0271C0();
extern int func_0279D8();
extern void func_024E20(unsigned int g, int arg);
extern void func_025000();
extern int func_0CE270(int key, int state, int arg);

void func_0184A0(void)
{
    func_0271C0();
    func_0279D8();
    func_024E20(D_001FE828 + 0x3C0, 0);
    func_025000(D_001FE828 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_0184F8(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0CE270(4, 0x30D, 0x21A);
}
