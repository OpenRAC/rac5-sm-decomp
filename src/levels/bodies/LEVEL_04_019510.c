/* LEVEL_04:0x019510 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_0024BBA8;
extern void func_0290F8();
extern int func_029910();
extern void func_026D58(unsigned int g, int arg);
extern void func_026F38();
extern void func_0DCD00();

void func_019510(void)
{
    func_0290F8();
    func_029910();
    func_026D58(D_0024BBA8 + 0x3C0, 0);
    func_026F38(D_0024BBA8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_019568(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0DCD00(4, 0x30D, 0x21A);
}
