extern float sqrtf(float);

void func_081430(float *lo, float *hi, const float *p, const float *q)
{
    float d0;
    float d1;
    float d2;
    float radius;
    float negative;

    d0 = fabsf(p[0]) + fabsf(q[0]);
    d1 = fabsf(p[1]) + fabsf(q[1]);
    d2 = fabsf(p[2]) + fabsf(q[2]);
    radius = sqrtf(d0 * d0 + d1 * d1 + d2 * d2);
    negative = -radius;
    lo[0] = negative;
    lo[1] = negative;
    lo[2] = negative;
    hi[0] = radius;
    hi[1] = radius;
    hi[2] = radius;
}
