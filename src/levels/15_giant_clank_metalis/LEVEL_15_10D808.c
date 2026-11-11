/* LEVEL_15:0x10D808 -- builds a frame from an object, scales its offset, then spawns an effect at each of four table slots found near it. */

extern void func_0EC3A0(float *out, char *a, char *b);
extern void func_0ECAB0(int a0, float *m, float x, float y, float z);
extern char *func_11D5D0(char *a0, float *m, int a2, float f12);
extern void func_0E6A68(float *out, float f12, float f13);
extern void func_114BB0(int a0, float *a1);
extern void func_12B788(char *a0, float *a1);

extern float D_001700A8[3];
extern int D_001700B8[4];
extern char D_002EFEE0[];
extern char D_00170168[];

static __inline__ void Add3(float *dst, float *a, float *b)
{
    dst[0] = a[0] + b[0];
    dst[1] = a[1] + b[1];
    dst[2] = a[2] + b[2];
}

void func_10D808(char *obj)
{
    float m[16];
    float v[4];
    float r[4];
    float f;
    float f2;
    char *p;
    unsigned int i;

    f = *(float *)(obj + 0x230);
    func_0EC3A0(m, obj + 0x6C, obj + 0x3C);
    m[12] = f * D_001700A8[0];
    m[13] = f * D_001700A8[1];
    m[14] = f * D_001700A8[2];
    func_0ECAB0(0, m, m[12], m[13], m[14]);
    f2 = f * f * 2.0f * 2.0f;
    for (i = 0; i < 4; i++) {
        p = func_11D5D0(D_002EFEE0 + i * 0x118, m, D_001700B8[i], f);
        if (p != 0) {
            func_0E6A68(v, 0.0f, f2);
            Add3(r, (float *)(p + 0x24), v);
            func_114BB0(0, r);
        }
    }
    func_12B788(D_00170168, m + 9);
}
