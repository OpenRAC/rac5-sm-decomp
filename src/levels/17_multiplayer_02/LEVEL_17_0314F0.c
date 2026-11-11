/* LEVEL_17:0x0314F0 -- a twelve-byte vector copied into a global, then the
   second argument stored in the word that follows it.
   The vector is three floats (four-byte alignment): one eight-byte piece
   moved unaligned (ldl/ldr, sdl/sdr) and one four-byte piece (lw, sw).
   The global's address is 0x1D4DE8; the compiler materialises it twice,
   once for the vector and once for the word at +12. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 v;
    int flag;
} Holder;

extern Holder D_001D4DE8;

void func_00314F0(V3 *src, int flag)
{
    D_001D4DE8.v = *src;
    D_001D4DE8.flag = flag;
}
