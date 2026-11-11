/* LEVEL_03:0x1DF198 -- placement copy of LEVEL_01_1CE508.c: writes the normalized horizontal direction between two points. */
extern float sqrtf(float x);
extern void func_1248A0(float *m, float *src, int flag);
extern void func_123DF0(float *dst, float *m, float *src);

void func_1DF198(float *p, float *out, float *a, float *b)
{
    float v[3];
    float m[12];
    float len;
    float inv;

    v[0] = b[0] - a[0];
    v[1] = b[1] - a[1];
    v[2] = b[2] - a[2];
    func_1248A0(m, p, 0);
    func_123DF0(v, m, v);
    len = sqrtf(v[0] * v[0] + v[2] * v[2]);
    inv = 1.0f / len;
    out[0] = inv * v[0];
    out[1] = inv * v[2];
}
