/* LEVEL_01:0x119FA8 -- a twelve-byte block is copied from a global onto
   the stack, then one of its words is handed to the next function.
   The block is three words (four-byte alignment): one eight-byte piece
   moved unaligned (ldl/ldr, sdl/sdr) and one four-byte piece (lw, sw).
   The global's address is 0x217D98. */
typedef struct {
    int i[3];
} Triple;

extern Triple D_00217D98;

void func_029708(int a, int b, int c);

void func_0119FA8(int a, int b, int c)
{
    Triple local = D_00217D98;

    func_029708(a - 1, b, local.i[c]);
}
