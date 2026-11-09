/* LEVEL_05:0x018E78 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_0021D0A8;
extern void func_0282C8();
extern int func_028AE0();
extern void func_025E08();
extern void func_025FE8();
extern void func_0D59E8();

void func_018E78(void)
{
    func_0282C8();
    func_028AE0();
    func_025E08(D_0021D0A8 + 0x3C0, 0);
    func_025FE8(D_0021D0A8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_018ED0(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D59E8(4, 0x30D, 0x21A);
}
