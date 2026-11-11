/* LEVEL_04:0x0BB0F0 -- stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_00342DA0[];
extern int D_00342DA8[];
extern void func_0BB080(int, int, unsigned char, int);

void func_0BB0F0(int slot, int a, int b, int c, int d, int e)
{
    D_00342DA0[slot] = a;
    D_00342DA8[slot] = b;
    func_0BB080(slot, c, d, e);
}
