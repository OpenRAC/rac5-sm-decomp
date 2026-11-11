/* LEVEL_09:0x019710 -- copies the shared quadruple into the caller's. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} V4;

extern V4 D_002172E0;

void func_019710(V4 *a0)
{
    a0->f_00 = D_002172E0.f_00;
    a0->f_04 = D_002172E0.f_04;
    a0->f_08 = D_002172E0.f_08;
    a0->f_0C = D_002172E0.f_0C;
}
