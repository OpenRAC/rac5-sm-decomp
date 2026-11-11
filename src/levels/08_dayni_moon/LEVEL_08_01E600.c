/* LEVEL_08:0x01E600 -- placement copy of LEVEL_01_01DC88.c: marches along a ray until a probe test succeeds, then refines the distance. */
extern int func_123A68(float a, void *b, void *c, float *d);
extern int func_121510(float *b, void *c, void *d, float *e, float a);
extern float func_01C9B8(float a, float *b, float *c, float *d);

float func_01E600(float *p, float *d, void *a, void *b, float max, float base, float k)
{
    float pt[3];
    float hit[3];
    float t;
    float s;
    float u;

    t = base * 1.5f;
    for (;;) {
        if (max < t) {
            break;
        }
        pt[0] = p[0] + d[0] * t;
        pt[1] = p[1] + d[1] * t;
        pt[2] = p[2] + d[2] * t;
        s = base + k * t;
        if (func_123A68(s, a, b, pt)) {
            max = t;
            break;
        }
        t += s * 1.5f;
    }
    u = base + k * max;
    pt[0] = p[0] + d[0] * max;
    pt[1] = p[1] + d[1] * max;
    pt[2] = p[2] + d[2] * max;
    if (func_121510(hit, a, b, pt, u)) {
        max -= func_01C9B8(u * u, hit, d, pt);
    }
    return max;
}
