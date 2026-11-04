typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern void func_013F00(float *a0, float f);

void func_013FE0(Vec *a0, float a, float b)
{
    float v[4];

    v[0] = a0->f_00;
    v[1] = a0->f_04 + a;
    v[2] = a0->f_08;
    v[3] = a;
    func_013F00(v, b);
    a0->f_00 = v[0];
    a0->f_04 = v[1] - a;
    a0->f_08 = v[2];
}
