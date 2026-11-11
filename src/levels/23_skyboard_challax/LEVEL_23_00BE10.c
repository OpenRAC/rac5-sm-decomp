/* LEVEL_23:0x00BE10 -- placement copy of LEVEL_01_00BE00.c: keeps the nearest hit of a plane test, copying its point and its source record. */

struct V3_00BE00 {
    float x;
    float y;
    float z;
};

extern int func_00BCC8(float *a0, struct V3_00BE00 *a1, void *a2, int a3, int a4, int a5,
                       float f12, float f13, float f14, float f15, float f16, float f17);

void func_00BE10(float *best, struct V3_00BE00 *hit, struct V3_00BE00 *src, float *n, struct V3_00BE00 *p,
                 float f12, float f13, float f14, float f15, float f16)
{
    struct V3_00BE00 pos;
    char buf[0x50];
    float t[4];
    float d;

    d = p->x * n[0] + p->y * n[1] + p->z * n[2];
    if (func_00BCC8(t, &pos, buf, (int)n, 4, (int)p, -d, f12, f13, f14, f15, f16) != 0) {
        if (*best < t[0]) {
            return;
        }
        if (*best < 0.0001f && pos.z > hit->z) {
            return;
        }
        *best = t[0];
        *hit = pos;
        *src = *p;
    }
}
