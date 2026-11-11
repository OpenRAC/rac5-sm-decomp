/* LEVEL_19:0x0A4178 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_00276660[];
extern int D_00276668[];
extern void func_0A4108(int, int, unsigned char, int);

void func_0A4178(int slot, int a, int b, int c, int d, int e)
{
    D_00276660[slot] = a;
    D_00276668[slot] = b;
    func_0A4108(slot, c, d, e);
}
