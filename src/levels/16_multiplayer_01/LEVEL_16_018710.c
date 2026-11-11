/* LEVEL_16:018710 -- copies the four floats of the global vector D_001DE860
   into the argument. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} V4;

extern V4 D_001DE860;

void func_018710(V4 *a0)
{
    a0->f_00 = D_001DE860.f_00;
    a0->f_04 = D_001DE860.f_04;
    a0->f_08 = D_001DE860.f_08;
    a0->f_0C = D_001DE860.f_0C;
}
