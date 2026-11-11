/* LEVEL_10.REL:0x07BA58 -- the game builds a 16-byte local block: a 12-byte
   record (two floats and an int) copied from the argument, and a float
   stored after it; the block is then handed to the shared code.

   The record copy is one unaligned quadword move (ldl/ldr on the read side,
   sdl/sdr on the write side) plus a word at +8: that is the shape of a
   12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    Record rec;
    float  v;
} Local;

extern void func_07BA90(Local *block);

void func_07BA58(Record *src, float v)
{
    Local block;

    block.rec = *src;
    block.v = v;
    func_07BA90(&block);
}
