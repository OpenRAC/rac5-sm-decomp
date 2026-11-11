/* LEVEL_21:0x015B80 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_00179528;
extern void func_022E28();
extern int func_023640();
extern void func_0210B8(unsigned int g, int arg);
extern void func_021298();
extern void func_0B7A80();

void func_015B80(void)
{
    func_022E28();
    func_023640();
    func_0210B8(D_00179528 + 0x3C0, 0);
    func_021298(D_00179528 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_015BD8(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0B7A80(4, 0x30D, 0x21A);
}
