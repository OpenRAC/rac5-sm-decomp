/* LEVEL_18.REL:0x030478 -- copy of a 12-byte record (two floats and an
   int) into the global record, and store of the second argument in the
   word that follows it.

   The retail copies the block with one unaligned quadword move (ldl/ldr on
   the read side, sdl/sdr on the write side) plus a word at +8: that is the
   shape of a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    Record rec;
    int    flag;
} Global;

extern Global D_001E3E68;

void func_030478(Record *src, int flag)
{
    D_001E3E68.rec = *src;
    D_001E3E68.flag = flag;
}
