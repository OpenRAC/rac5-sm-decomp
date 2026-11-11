/* LEVEL_01:0x0B2EF8 -- writes the level of one 0x20-stride element. */
typedef struct {
    char pad0[0x14];
    float f14;
    char pad1[0x20 - 0x18];
} El;

extern El D_00327A18[];

void func_0B2EF8(int a0, float f12)
{
    D_00327A18[a0].f14 = f12;
}
