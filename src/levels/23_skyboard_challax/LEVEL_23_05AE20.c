/* LEVEL_23:0x05AE20 -- placement copy of LEVEL_22_057270.c: steers the stored heading toward a target point at the stored speed and renormalises it. */

typedef struct Aim057270 {
    char pad_00[0x200];
    float dir[3];
    char pad_20C[0x23C - 0x20C];
    float f_23C;
} Aim057270;

extern Aim057270 D_002025C0;
extern float sqrtf(float x);

static inline float Length3(float *a)
{
    return sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

void func_05AE20(float *v)
{
    float tmp[3];
    Aim057270 *g;
    float *p;
    float speed;
    float scale;
    float len2;
    float inv;
    float d0;
    float d1;
    float d2;

    g = &D_002025C0;
    if (g != 0 && v != 0) {
        p = g->dir;
        speed = g->f_23C;
        scale = speed / Length3(p);
        d0 = scale * p[0];
        d1 = scale * p[1];
        d2 = scale * p[2];
        tmp[0] = d0 + v[0];
        tmp[1] = d1 + v[1];
        tmp[2] = d2 + v[2];
        len2 = tmp[0] * tmp[0] + tmp[1] * tmp[1] + tmp[2] * tmp[2];
        if (!(len2 < 2.3841858e-07f)) {
            inv = 1.0f / sqrtf(len2);
            p[0] = inv * tmp[0];
            p[1] = inv * tmp[1];
            p[2] = inv * tmp[2];
        }
    }
}
