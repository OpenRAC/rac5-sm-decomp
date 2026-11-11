/* LEVEL_10:019938 -- copies the four floats of the global vector D_00238F60
   into the argument. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} V4;

extern V4 D_00238F60;

void func_019938(V4 *a0)
{
    a0->f_00 = D_00238F60.f_00;
    a0->f_04 = D_00238F60.f_04;
    a0->f_08 = D_00238F60.f_08;
    a0->f_0C = D_00238F60.f_0C;
}
