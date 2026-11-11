/* LEVEL_09.REL:0196E8 -- copies the three floats of the global D_002172E0
   into the object. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Tri;

extern Tri D_002172E0;

void func_0196E8(Tri *a0)
{
    a0->f_00 = D_002172E0.f_00;
    a0->f_04 = D_002172E0.f_04;
    a0->f_08 = D_002172E0.f_08;
}
