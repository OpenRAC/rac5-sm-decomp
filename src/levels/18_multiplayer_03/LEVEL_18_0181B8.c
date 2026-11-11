/* LEVEL_18.REL:0x0181B8 -- copy of a 12-byte record (two floats and an
   int) from the global record into the caller's record.

   The retail copies the block with one unaligned quadword move (ldl/ldr on
   the read side, sdl/sdr on the write side) plus a word at +8: that is the
   shape of a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

extern Record D_001DEC68;

Record *func_0181B8(Record *dst)
{
    *dst = D_001DEC68;
    return dst;
}
