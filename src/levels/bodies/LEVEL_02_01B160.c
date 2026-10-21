/* LEVEL_02.REL:0x01B160 -- copy of a 12-byte record (two floats and an
   int) from the global record into the caller's record.

   The retail copies the block with one unaligned quadword move (ldl/ldr on
   the read side, sdl/sdr on the write side) plus a word at +8: that is the
   shape of a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

extern Record D_002470E8;

Record *func_01B160(Record *dst)
{
    *dst = D_002470E8;
    return dst;
}
