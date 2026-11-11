/* LEVEL_01:0x080DD0 -- half-extent of the sum of the absolute components,
   written negative on the first point and positive on the second. */
extern float sqrtf(float);

void func_080DD0(float *lo, float *hi, const float *p, const float *q)
{
    float d0;
    float d1;
    float d2;
    float r;
    float n;

    d0 = fabsf(p[0]) + fabsf(q[0]);
    d1 = fabsf(p[1]) + fabsf(q[1]);
    d2 = fabsf(p[2]) + fabsf(q[2]);
    r = sqrtf(d0 * d0 + d1 * d1 + d2 * d2);
    n = -r;
    lo[0] = n;
    lo[1] = n;
    lo[2] = n;
    hi[0] = r;
    hi[1] = r;
    hi[2] = r;
}
