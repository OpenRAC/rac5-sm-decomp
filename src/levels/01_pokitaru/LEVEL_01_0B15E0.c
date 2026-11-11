/* LEVEL_01:0x0B15E0 -- mirrors the three floats of the vector into the global
   slot. */
typedef struct {
    float f0;
    float f1;
    float f2;
} V3;

extern V3 D_001FC170;

void func_0B15E0(V3 *a0)
{
    D_001FC170.f0 = a0->f0;
    D_001FC170.f1 = a0->f1;
    D_001FC170.f2 = a0->f2;
}
