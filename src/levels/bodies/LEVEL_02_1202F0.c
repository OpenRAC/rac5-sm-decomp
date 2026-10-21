/* LEVEL_02:0x1202F0 -- a twelve-byte block is copied from a global onto
   the stack, then one of its words is handed to the next function.
   The block is three words (four-byte alignment): one eight-byte piece
   moved unaligned (ldl/ldr, sdl/sdr) and one four-byte piece (lw, sw).
   The global's address is 0x22CD18 (lui 0x23, addiu -0x32E8). */
typedef struct {
    int i[3];
} Triple;

extern Triple D_0022CD18;

void func_029ED0(int a, int b, int c);

void func_01202F0(int a, int b, int c)
{
    Triple local = D_0022CD18;

    func_029ED0(a - 1, b, local.i[c]);
}
