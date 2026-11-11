/* LEVEL_08:0x03A8A8 -- a twelve-byte vector copied into a global, then the
   second argument stored in the word that follows it.
   Three floats (four-byte alignment): one eight-byte piece moved unaligned
   (ldl/ldr, sdl/sdr) and one four-byte piece (lw, sw).
   The global's address is 0x283E30. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 v;
    int flag;
} Holder;

extern Holder D_00283E30;

void func_003A8A8(V3 *src, int flag)
{
    D_00283E30.v = *src;
    D_00283E30.flag = flag;
}
