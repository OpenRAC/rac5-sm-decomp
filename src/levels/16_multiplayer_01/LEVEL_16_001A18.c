/* LEVEL_16:0x001A18 -- placement copy of LEVEL_01_001E20.c: converts the offset between two points into a yaw and a pitch, with the pitch clamped to a limit before it is folded into the first angle. */

extern float sqrtf(float x);
extern float asinf(float x);
extern float atan2f(float y, float x);
extern float fabsf(float x);

extern void func_104E90(float *out, void *m, float *in, int flag);

void func_001A18(float *p, void *m, float *q, float *out1, float *out2, float fa, float fb)
{
    float d[4];
    float v[4];
    float n[4];
    float len;
    float inv;
    float pitch;
    float hi;
    float lo;

    d[0] = p[0] - q[0];
    d[1] = p[1] - q[1];
    d[2] = p[2] - q[2];
    func_104E90(v, m, d, 0);
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    inv = 1.0f / len;
    n[0] = inv * v[0];
    n[1] = inv * v[1];
    n[2] = inv * v[2];
    pitch = asinf(n[1]);
    hi = fabsf(pitch + 1.4137166738510132f);
    pitch -= 1.4137166738510132f;
    pitch += hi;
    lo = fabsf(2.8274333477020264f - pitch);
    pitch += 2.8274333477020264f;
    pitch -= lo;
    pitch = pitch * 0.25f;
    *out2 = atan2f(fb, fa) - pitch;
    *out1 = atan2f(n[2], n[0]);
}
