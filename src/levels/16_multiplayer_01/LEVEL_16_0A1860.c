/* LEVEL_16:0x0A1860 -- writes the level of one 0x20-stride element. */
typedef struct {
    char pad0[0x14];
    float f14;
    char pad1[0x20 - 0x18];
} El;

extern El D_00275D28[];

void func_0A1860(int a0, float f12)
{
    D_00275D28[a0].f14 = f12;
}
