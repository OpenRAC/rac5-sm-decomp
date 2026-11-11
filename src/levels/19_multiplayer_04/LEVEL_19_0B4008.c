/* LEVEL_19:0x0B4008 -- sixteen bytes copied from $a0 into a global.
   The block is four floats (four-byte alignment), so the compiler cuts it
   in two eight-byte pieces moved unaligned: ldl/ldr then sdl/sdr, twice.
   The global's address is 0x279AD8 (lui 0x28, addiu -0x6528). */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_00279AD8;

void func_00B4008(V4 *src)
{
    D_00279AD8 = *src;
}
