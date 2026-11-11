/* LEVEL_19.REL:013858 -- offsets the middle of the point by the first float,
   hands it to the shared routine with the second float, then takes the
   offset back out. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern int func_013778(float *pos, float *vel, int a2, int a3, float dy);

void func_013858(Vec *a0, float *vel, int a2, int a3, float a, float b)
{
    float v[4];

    v[0] = a0->f_00;
    v[1] = a0->f_04 + a;
    v[2] = a0->f_08;
    v[3] = a;
    func_013778(v, vel, a2, a3, b);
    a0->f_00 = v[0];
    a0->f_04 = v[1] - a;
    a0->f_08 = v[2];
}
