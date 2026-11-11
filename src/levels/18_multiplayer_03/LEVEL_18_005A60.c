extern int func_01E238(float a, void *out, void *tmp, void *in, void *p6,
              int f1, int f2, int f3);

float func_005A60(float p1, float p2, float p3, float p4, float *p5, float *p6)
{
    float v[3];
    char tmp[32];
    float out[4];

    v[0] = *p5 + p6[0] * p2;
    v[1] = p5[1] + p6[1] * p2;
    v[2] = p5[2] + p6[2] * p2;
    if (func_01E238((p1 - p2) + p3, out, tmp, v, p6, 0x1020, 0, 0x10) != 0)
        return ((out[0] + p2) - p3) - p4;
    return p1;
}
