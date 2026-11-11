extern float D_00181760[];

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} Dst;

void func_0169F0(Dst *a0)
{
    float *s = D_00181760;

    a0->f00 = s[0];
    a0->f04 = s[1];
    a0->f08 = s[2];
    a0->f0C = s[3];
}
