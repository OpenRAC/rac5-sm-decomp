/* LEVEL_08:0x01A228 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_00280628;
extern void func_029BC8();
extern int func_02A3E0();
extern void func_0276F0();
extern void func_0278D0();
extern void func_0E2410();

void func_01A228(void)
{
    func_029BC8();
    func_02A3E0();
    func_0276F0(D_00280628 + 0x3C0, 0);
    func_0278D0(D_00280628 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_01A280(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0E2410(4, 0x30D, 0x21A);
}
