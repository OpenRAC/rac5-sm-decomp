/* LEVEL_01:0x1DFE10 -- squares the first two floats of the caller's record
   and stores the square and the scaled difference of the squares. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Rec;

void func_1DFE10(Rec *a0)
{
    float x = a0->f_00;
    float y = a0->f_04;
    float xx = x * x;
    float yy = y * y;

    a0->f_08 = xx;
    a0->f_0C = (yy - xx) * 4.656612873077393e-10f;
}
