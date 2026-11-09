/* LEVEL_24:0x017F80 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_001FD2A8;
extern void func_026B90();
extern int func_0273A8();
extern void func_0249F8();
extern void func_024BD8();
extern void func_0D0DA8();

void func_017F80(void)
{
    func_026B90();
    func_0273A8();
    func_0249F8(D_001FD2A8 + 0x3C0, 0);
    func_024BD8(D_001FD2A8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_017FD8(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D0DA8(4, 0x30D, 0x21A);
}
