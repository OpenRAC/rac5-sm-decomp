/* LEVEL_05:0x115FC8 -- a twelve-byte block is copied from a global onto
   the stack, then one of its words is handed to the next function.
   The block is three words (four-byte alignment): one eight-byte piece
   moved unaligned (ldl/ldr, sdl/sdr) and one four-byte piece (lw, sw).
   The global's address is 0x206C98. */
typedef struct {
    int i[3];
} Triple;

extern Triple D_00206C98;

void func_028380(int a, int b, int c);

void func_0115FC8(int a, int b, int c)
{
    Triple local = D_00206C98;

    func_028380(a - 1, b, local.i[c]);
}
