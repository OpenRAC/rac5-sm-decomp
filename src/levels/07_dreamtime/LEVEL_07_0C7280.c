/* LEVEL_07:0x0C7280 -- sixteen bytes copied from $a0 into a global.
   Four floats (four-byte alignment): two eight-byte pieces moved unaligned,
   ldl/ldr then sdl/sdr, twice.  The global's address is 0x341318. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_00341318;

void func_00C7280(V4 *src)
{
    D_00341318 = *src;
}
