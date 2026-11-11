/* LEVEL_04.REL:0x01A480 -- copy of a 12-byte record (two floats and an
   int) from the global record into the caller's record.

   The retail copies the block with one unaligned quadword move (ldl/ldr on
   the read side, sdl/sdr on the write side) plus a word at +8: that is the
   shape of a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

extern Record D_0024A3E8;

Record *func_01A480(Record *dst)
{
    *dst = D_0024A3E8;
    return dst;
}
