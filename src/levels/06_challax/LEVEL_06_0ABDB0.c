/* LEVEL_06:0ABDB0 -- copies the three floats of the argument into the global
   record D_001EB070. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern V3 D_001EB070;

void func_0ABDB0(V3 *a0)
{
    D_001EB070.f_00 = a0->f_00;
    D_001EB070.f_04 = a0->f_04;
    D_001EB070.f_08 = a0->f_08;
}
