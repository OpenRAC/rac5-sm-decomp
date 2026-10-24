/* LEVEL_04.REL:013DF8 -- offsets the middle of the point by the first float,
   hands it to the shared routine with the second float, then takes the
   offset back out. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern void func_013D18(float *a0, float f);

void func_013DF8(Vec *a0, float a, float b)
{
    float v[4];

    v[0] = a0->f_00;
    v[1] = a0->f_04 + a;
    v[2] = a0->f_08;
    v[3] = a;
    func_013D18(v, b);
    a0->f_00 = v[0];
    a0->f_04 = v[1] - a;
    a0->f_08 = v[2];
}
