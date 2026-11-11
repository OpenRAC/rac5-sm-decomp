/* LEVEL_16.REL:0x031BA8 -- copy of a 12-byte record (two floats and an
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

extern Global D_001E3AE8;

void func_031BA8(Record *src, int flag)
{
    D_001E3AE8.rec = *src;
    D_001E3AE8.flag = flag;
}
