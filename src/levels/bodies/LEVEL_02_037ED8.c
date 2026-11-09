/* LEVEL_02:0x037ED8 -- sweeps a segment through the world and reports the hit position. */
typedef struct { float x, y, z, w; } V4;
extern float sqrtf(float);
extern void func_037710(void *a, int b);
extern int func_021640(V4 *t, void *w, float *p, V4 *d, int a, int b, int c, float len);
extern int func_020508(float *p1, float *out, V4 *a, V4 *b, V4 *c, void *w, float *p2, int n, int z0, int z1, float f);

int func_037ED8(void *a, int unused, float *p0, float *p1, float *out, void *w)
{
    V4 s10;
    V4 s20;
    V4 d;
    V4 t;
    float len;
    float inv;
    float r;
    int hit;

    func_037710(a, 0);
    d.x = p1[0] - p0[0];
    d.y = p1[1] - p0[1];
    d.z = p1[2] - p0[2];
    len = d.x * d.x + d.y * d.y + d.z * d.z;
    if (len < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        r = sqrtf(len);
        inv = 1.0f / r;
        len = r;
        d.x *= inv;
        d.y *= inv;
        d.z *= inv;
    }
    if (func_021640(&t, w, p0, &d, 0x28, 0, 0, len)) {
        hit = 1;
        out[0] = p0[0] + d.x * t.x;
        out[1] = p0[1] + d.y * t.x;
        out[2] = p0[2] + d.z * t.x;
    } else {
        hit = func_020508(p1, out, &s10, &s20, &t, w, p1, 0x28, 0, 0, 0.4f) != 0;
    }
    func_037710(a, 1);
    return hit;
}
