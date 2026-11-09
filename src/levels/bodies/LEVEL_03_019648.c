/* LEVEL_03:0x019648 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_0024C228;
extern void func_029448();
extern int func_029C60();
extern void func_026FA8();
extern void func_027188();
extern void func_0D7228();

void func_019648(void)
{
    func_029448();
    func_029C60();
    func_026FA8(D_0024C228 + 0x3C0, 0);
    func_027188(D_0024C228 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_0196A0(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D7228(4, 0x30D, 0x21A);
}
