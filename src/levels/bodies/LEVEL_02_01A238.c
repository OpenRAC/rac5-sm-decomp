/* LEVEL_02:0x01A238 -- placement copy of LEVEL_01_019838.c: runs two setup calls, then two calls on fields of a shared state word. */

extern int D_002488A8;
extern void func_029E18();
extern int func_02A630();
extern void func_0278B0(unsigned int g, int arg);
extern void func_027A90();
extern void func_0DDDD0();

void func_01A238(void)
{
    func_029E18();
    func_02A630();
    func_0278B0(D_002488A8 + 0x3C0, 0);
    func_027A90(D_002488A8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_01A290(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0DDDD0(4, 0x30D, 0x21A);
}
