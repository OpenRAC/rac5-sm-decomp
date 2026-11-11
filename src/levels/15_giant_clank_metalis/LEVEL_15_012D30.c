/* LEVEL_15:0x012D30 -- placement copy of LEVEL_01_013FE0.c. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern int func_012C50(float *pos, float *vel, int a2, int a3, float dy);

void func_012D30(Vec *a0, float *vel, int a2, int a3, float a, float b)
{
    float v[4];

    v[0] = a0->f_00;
    v[1] = a0->f_04 + a;
    v[2] = a0->f_08;
    v[3] = a;
    func_012C50(v, vel, a2, a3, b);
    a0->f_00 = v[0];
    a0->f_04 = v[1] - a;
    a0->f_08 = v[2];
}
