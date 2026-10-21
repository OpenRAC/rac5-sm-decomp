/* LEVEL_22:0x0B36D0 -- copies a 16-byte float block (four floats) from the
   argument into a global. */
typedef struct {
    float f[4];
} Quad;

extern Quad D_2815D8;

void func_0B36D0(Quad *src)
{
    D_2815D8 = *src;
}
