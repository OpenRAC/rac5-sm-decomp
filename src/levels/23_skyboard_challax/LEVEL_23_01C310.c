/* LEVEL_23:0x01C310 -- placement copy of LEVEL_01_01DB40.c: tests a displaced position, and if blocked asks a second helper with the axis length of a matrix row set. */

extern float sqrtf(float x);
extern int func_01ABF8(float *mn, float *mx, float *m, float *x, float s, float e);
extern int func_10ED38(void *a0, void *a1, float *a2, float *a3, float *t0, float *t1, float *t2,
                       float *t3, float f12, float f13, float f14);

static __inline__ int Second(void *a0, void *a1, float *m, float *base, float *dir, float p2,
                             float p3)
{
    float len2;
    float len;

    len2 = m[0] * m[0] + m[1] * m[1] + m[2] * m[2];
    len = sqrtf(len2);
    return (unsigned char)func_10ED38(a0, a1, m, m + 4, m + 8, m + 12, base, dir, p2, len2, p3 * len);
}

int func_01C310(float *a0, float *a1, float *m, float *base, float *dir, float p1, float p2, float p3,
                float p4)
{
    float vec[3];

    vec[0] = base[0] + dir[0] * p2;
    vec[1] = base[1] + dir[1] * p2;
    vec[2] = base[2] + dir[2] * p2;
    if (func_01ABF8(a0, a1, m, vec, p1, p4) != 0 || Second(a0, a1, m, base, dir, p2, p3) != 0) {
        return 1;
    }
    return 0;
}
