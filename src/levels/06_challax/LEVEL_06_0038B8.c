extern float *D_001DE154;
extern float atan2f(float y, float x);
extern void func_003600(float angle, void *a, float v, void *b);

void func_0038B8(float *vec, void *a1, void *a2, float f)
{
    float *m = D_001DE154;
    float *p = (float *)((char *)m + 0x54);
    float *q = (float *)((char *)m + 0x6C);
    float x = vec[0] * p[0] + vec[1] * p[1] + vec[2] * p[2];
    float y = vec[0] * q[0] + vec[1] * q[1] + vec[2] * q[2];
    float ang = atan2f(-y, -x);

    func_003600(ang, a1, f, a2);
}
