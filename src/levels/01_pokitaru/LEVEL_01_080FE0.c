extern float fabsf(float x);
extern float sqrtf(float x);

void func_080FE0(float *o0, float *o1, float *a, float *b)
{
    float x = fabsf(a[0]) + fabsf(b[0]);
    float z = fabsf(a[2]) + fabsf(b[2]);
    float r = sqrtf(x * x + z * z);

    o0[1] = a[1] - b[1];
    o0[0] = -r;
    o0[2] = -r;
    o1[1] = a[1] + b[1];
    o1[0] = r;
    o1[2] = r;
}
