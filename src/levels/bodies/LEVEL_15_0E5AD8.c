/* LEVEL_15:0x0E5AD8 -- splits a travel distance into a ramp phase and a cruise phase. */
extern float sqrtf(float x);

void func_0E5AD8(float *ramp, float *pa, float *pb, float dist, float lim, float acc)
{
    float t;
    float h;
    float r;
    float a;
    float b;

    t = lim / acc;
    h = acc * 0.5f * t * t;
    if (dist <= h) {
        r = 0.0f;
        a = sqrtf(dist * 0.5f / acc);
        b = 1.0f;
    } else {
        r = (dist - h) / lim;
        a = t + r;
        b = t / a;
    }
    *ramp = r;
    *pa = a;
    *pb = b;
}
