typedef struct {
    float f0;
    float f4;
    float f8;
} T;

float func_020EB8(T *a0, T *a1, float p0, float p1);

void func_0FE850(T *a0, T *a1, float p0, float p1)
{
    float r = func_020EB8(a0, a1, p0, p1);

    a0->f4 = a1->f4 + p0;
    a0->f8 = a1->f8 * p1 * r;
}
