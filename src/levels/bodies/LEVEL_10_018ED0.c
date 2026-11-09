/* LEVEL_10:0x018ED0 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_0023A7A8;
extern void func_029428();
extern int func_029C40();
extern void func_0269A8();
extern void func_026B88();
extern void func_0D8880();

void func_018ED0(void)
{
    func_029428();
    func_029C40();
    func_0269A8(D_0023A7A8 + 0x3C0, 0);
    func_026B88(D_0023A7A8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_018F28(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D8880(4, 0x30D, 0x21A);
}
