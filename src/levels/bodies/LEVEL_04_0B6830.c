/* LEVEL_04:0x0B6830 -- mirrors the three floats of the vector into the global
   slot. */
typedef struct {
    float f0;
    float f1;
    float f2;
} V3;

extern V3 D_00215630;

void func_0B6830(V3 *a0)
{
    D_00215630.f0 = a0->f0;
    D_00215630.f1 = a0->f1;
    D_00215630.f2 = a0->f2;
}
