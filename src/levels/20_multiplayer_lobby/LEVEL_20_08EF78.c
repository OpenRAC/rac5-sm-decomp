/* LEVEL_20:0x08EF78 -- placement copy of LEVEL_04_0BB0F0.c: stores two words in the per-slot tables and forwards
   the remaining arguments. */
extern int D_00199D20[];
extern int D_00199D28[];
extern void func_08EF08(int, int, unsigned char, int);

void func_08EF78(int slot, int a, int b, int c, int d, int e)
{
    D_00199D20[slot] = a;
    D_00199D28[slot] = b;
    func_08EF08(slot, c, d, e);
}
