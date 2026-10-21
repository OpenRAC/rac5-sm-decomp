/* LEVEL_22.REL:0x016E18 -- copy of a 12-byte record (two floats and an
   int) from the global record into the caller's record.

   The retail copies the block with one unaligned quadword move (ldl/ldr on
   the read side, sdl/sdr on the write side) plus a word at +8: that is the
   shape of a 12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

extern Record D_001817E8;

Record *func_016E18(Record *dst)
{
    *dst = D_001817E8;
    return dst;
}
