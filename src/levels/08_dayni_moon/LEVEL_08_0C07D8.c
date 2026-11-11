/* LEVEL_08:0x0C07D8 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_00377820[];
extern int D_00377828[];
extern void func_0C0768(int, int, unsigned char, int);

void func_0C07D8(int slot, int a, int b, int c, int d, int e)
{
    D_00377820[slot] = a;
    D_00377828[slot] = b;
    func_0C0768(slot, c, d, e);
}
