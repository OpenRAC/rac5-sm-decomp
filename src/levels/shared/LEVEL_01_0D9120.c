/* LEVEL_01:0x0D9120 -- sixteen bytes moved from $a1 to $a0+0xD0.
   The block is four floats (four-byte alignment), so the compiler cuts it
   in two eight-byte pieces and moves them unaligned: ldl/ldr then
   sdl/sdr, twice. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

void func_00D9120(V4 *dst, V4 *src)
{
    *(V4 *)((char *)dst + 0xD0) = *src;
}
