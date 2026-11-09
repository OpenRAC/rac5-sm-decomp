/* LEVEL_21:0x13E7C0 -- placement copy of LEVEL_08_22FCA0.c: interpolates a keyframe record by the owner's blend factor and forwards it. */
struct Blend {
    int f0;
    int f4;
    float *key;
    float t;
};
extern int *func_07B6B0(int index);
extern void func_13E0F0(void *r, void *q, float u, float v, void *p, float *k, float a, float b, float c, float d, float e, float f,
                        float g, float h);

void func_13E7C0(int unused, struct Blend *p, void *q, float u, float v)
{
    float *l;
    float t;
    int *r;
    float x0, x1, a, b, c, d, e, f;

    r = func_07B6B0(unused);
    l = p->key;
    t = p->t;
    a = (l[11] - l[0]) * t + l[0];
    b = (l[18] - l[7]) * t + l[7];
    c = (l[12] - l[1]) * t + l[1];
    d = (l[19] - l[8]) * t + l[8];
    e = (l[14] - l[3]) * t + l[3];
    f = (l[20] - l[9]) * t + l[9];
    x0 = (l[16] - l[5]) * t + l[5];
    x1 = (l[21] - l[10]) * t + l[10];
    func_13E0F0(r, q, u, v, p, l + 22, a, b, c, d, e, f, x0, x1);
}
