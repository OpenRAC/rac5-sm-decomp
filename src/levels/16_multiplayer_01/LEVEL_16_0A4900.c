/* LEVEL_16:0x0A4900 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_002764E0[];
extern int D_002764E8[];
extern void func_0A4890(int, int, unsigned char, int);

void func_0A4900(int slot, int a, int b, int c, int d, int e)
{
    D_002764E0[slot] = a;
    D_002764E8[slot] = b;
    func_0A4890(slot, c, d, e);
}
