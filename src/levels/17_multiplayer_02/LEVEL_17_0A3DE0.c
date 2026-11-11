/* LEVEL_17:0x0A3DE0 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_002677E0[];
extern int D_002677E8[];
extern void func_0A3D70(int, int, unsigned char, int);

void func_0A3DE0(int slot, int a, int b, int c, int d, int e)
{
    D_002677E0[slot] = a;
    D_002677E8[slot] = b;
    func_0A3D70(slot, c, d, e);
}
