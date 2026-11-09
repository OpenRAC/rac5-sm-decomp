/* LEVEL_01:0x019838 -- runs two setup calls, then two calls on fields of a shared state word. */

extern int D_002313A8;
extern void func_029650();
extern int func_029E68();
extern void func_0270C8();
extern void func_0272A8();
extern void func_0D7440();

void func_019838(void)
{
    func_029650();
    func_029E68();
    func_0270C8(D_002313A8 + 0x3C0, 0);
    func_0272A8(D_002313A8 + 0x14320, 0);
}

/* LEVEL_01:0x019890 -- reports a status code unless the argument is 1. */
void func_019890(int a0)
{
    if (a0 != 0) {
        if (a0 == 1) {
            return;
        }
    }
    func_0D7440(4, 0x30D, 0x21A);
}
