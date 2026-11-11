/* LEVEL_18:0x0A38F8 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_00276860[];
extern int D_00276868[];
extern void func_0A3888(int, int, unsigned char, int);

void func_0A38F8(int slot, int a, int b, int c, int d, int e)
{
    D_00276860[slot] = a;
    D_00276868[slot] = b;
    func_0A3888(slot, c, d, e);
}
