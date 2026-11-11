/* LEVEL_15:0x0E5A10 -- splits a quadratic pair into two float outputs. */
extern float sqrtf(float x);

void func_0E5A10(float *o1, float *o2, float x, float y, float z)
{
    float q;
    float t;
    float f0;
    float f1;

    q = y / z;
    t = z * 0.5f;
    t = t * q;
    t = t * q;
    t = t + t;
    if (x <= t) {
        f0 = sqrtf(x / z);
        f1 = 0.5f;
    } else {
        f0 = q + q + (x - t) / y;
        f1 = q / f0;
    }
    *o1 = f0;
    *o2 = f1;
}
