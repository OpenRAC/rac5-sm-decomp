/* LEVEL_01:0x026D38 -- builds a normalized direction from an object position to a point and forwards it with its length. */
extern float sqrtf(float);
extern void func_026C58(float *, float *, float);

void func_026D38(float *obj, float *p)
{
    float d[3];
    float len;
    float l2;
    d[0] = p[0] - obj[0];
    d[1] = p[1] - obj[1];
    d[2] = p[2] - obj[2];
    l2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (l2 < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        float inv;
        float r = sqrtf(l2);
        inv = 1.0f / r;
        d[0] = d[0] * inv;
        d[1] = d[1] * inv;
        d[2] = d[2] * inv;
        len = r;
    }
    func_026C58(obj, d, len);
}
