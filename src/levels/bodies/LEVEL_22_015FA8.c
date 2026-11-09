/* LEVEL_22:0x015FA8 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_00182FA8;
extern void func_023BE8();
extern int func_024400();
extern void func_021A58();
extern void func_021C38();
extern void func_0C5980();

void func_015FA8(void)
{
    func_023BE8();
    func_024400();
    func_021A58(D_00182FA8 + 0x3C0, 0);
    func_021C38(D_00182FA8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_016000(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0C5980(4, 0x30D, 0x21A);
}
