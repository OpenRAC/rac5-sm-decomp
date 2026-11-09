/* LEVEL_02:0x17B118 -- scales a three-float vector by a negated field and calls a helper. */

extern char D_00240000[];
extern void func_17B2D8(char *o);
extern void func_020ED0(void *a0, void *a1, void *a2, int a3, int a4, float f);

void func_17B118(char *o)
{
    char *s;
    float *v;
    float *w;
    float *p;
    float k;
    float tmp[4];
    float pad[4];

    s = *(char **)(o + 0x54);
    func_17B2D8(o);
    *(unsigned char *)(o + 0x45) = 3;
    w = (float *)(o + 0x20);
    p = (float *)(o + 0x30);
    k = -*(float *)(s + 4) * 0.2f;
    v = (float *)(s + 0xC);
    v[0] = k * w[0];
    v[1] = k * w[1];
    v[2] = k * w[2];
    func_020ED0(s + 0x18, tmp, p, 0x28, 0, p[1] - *(float *)(D_00240000 + 0x6C04));
}
