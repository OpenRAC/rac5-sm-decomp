/* LEVEL_15.REL:0x0FDA00 -- the game writes a 28-byte block: a flag word,
   then two 12-byte records (two floats and an int) copied from two global
   records.

   Each record copy is one unaligned quadword move (ldl/ldr on the read
   side, sdl/sdr on the write side) plus a word at +8: that is the shape of
   a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    int    flag;
    Record rec1;
    Record rec2;
} Out;

extern Record D_0016C618;
extern Record D_0016C5D8;

void func_0FDA00(Out *dst, int flag)
{
    dst->flag = flag;
    dst->rec1 = D_0016C618;
    dst->rec2 = D_0016C5D8;
}
