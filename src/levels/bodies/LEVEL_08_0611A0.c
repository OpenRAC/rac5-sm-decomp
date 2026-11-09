/* LEVEL_08:0x0611A0 -- placement copy of LEVEL_03_05A2F8.c: fetches two sample points for the object, stores their unit direction, and copies three frame components alongside it. */

struct B {
    char pad_00[0x10];
    int w_10;
};

extern float sqrtf(float x);
extern void func_05C550(float *l, struct B *b);
extern int func_05C418(float *out, float f, float g, int a, float h, int b);

void func_0611A0(float *out, struct B *b)
{
    float l[8];
    float p[4];
    float q[4];
    float d[3];
    float len2;
    float len;
    float inv;

    func_05C550(l, b);
    if (func_05C418(p, 0.0f, 0.0f, 0, 0.0f, b->w_10)) {
        if (func_05C418(q, l[0], 0.0f, 0, 0.0f, b->w_10)) {
            d[0] = q[0] - p[0];
            d[1] = q[1] - p[1];
            d[2] = q[2] - p[2];
            len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
            if (!(len2 < 2.38418579e-07f)) {
                len = sqrtf(len2);
                inv = 1.0f / len;
                out[0] = inv * d[0];
                out[1] = inv * d[1];
                out[2] = inv * d[2];
            }
        }
    }
    out[3] = l[1];
    out[4] = l[2];
    out[5] = l[4];
}
