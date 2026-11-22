/* LEVEL_23:0x01B618 -- placement copy of LEVEL_01_01CE48.c: shortens a travel distance by the triangle hit fraction, then refines it with a probe test at the end point. */
extern int func_103DA0(float t, void *a, float *p, float *d, float *out);
extern int func_103598(float *b, void *c, void *d, float *e, float a);
extern float func_01AB50(float a, float *b, float *c, float *d);

float func_01B618(float *p, float *d, void *a, void *b, float len, float r)
{
    float pt[3];
    float hit[3];
    float out[3];

    if (func_103DA0(len, a, p, d, out)) {
        len -= (1.0f - out[0]) * len + r;
    }
    pt[0] = p[0] + d[0] * len;
    pt[1] = p[1] + d[1] * len;
    pt[2] = p[2] + d[2] * len;
    if (func_103598(hit, a, b, pt, r)) {
        len -= func_01AB50(r * r, hit, d, pt);
    }
    return len;
}
