/* LEVEL_08:0x202600 -- normalizes the basis of an object, then for each of eight table entries transforms it and submits a half-extent offset direction. */
extern float sqrtf(float x);

typedef struct Basis {
    float r0[3];
    float w0;
    float r1[3];
    float w1;
    float r2[3];
    float w2;
    float r3[3];
    char pad_3C[9];
    unsigned char state_45;
} Basis;

typedef struct Ent {
    int index;
    float a[13];
    float f38;
} Ent;

extern Ent D_00278520[];
extern char D_003EADC0[];
extern float D_00261B18[3];

extern void func_136510(float *out, float *src, float *mat);
extern void func_2034E8(char *item, float *a, float *b, float f);

static __inline__ void Scale3(float *d, float *s, float k)
{
    d[0] = k * s[0];
    d[1] = k * s[1];
    d[2] = k * s[2];
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_202600(Basis *o, float *dir)
{
    float m[16];
    float out[16];
    float v[3];
    float len2;
    float inv;
    float k;
    unsigned int i;
    Ent *e;

    if (dir == 0) {
        dir = D_00261B18;
    }
    len2 = o->r0[0] * o->r0[0] + o->r0[1] * o->r0[1] + o->r0[2] * o->r0[2];
    inv = 1.0f / sqrtf(len2);
    Scale3(&m[0], o->r0, inv);
    Scale3(&m[4], o->r1, inv);
    Scale3(&m[8], o->r2, inv);
    Copy3(&m[12], o->r3);
    m[15] = 1.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    for (i = 0; i < 8; i++) {
        e = &D_00278520[i];
        func_136510(out, e->a, m);
        v[0] = out[8] * 0.5f;
        v[1] = out[9] * 0.5f;
        v[2] = out[10] * 0.5f;
        v[0] = v[0] + dir[0] * 0.5f;
        v[1] = v[1] + dir[1] * 0.5f;
        v[2] = v[2] + dir[2] * 0.5f;
        len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
        if (!(len2 < 2.3841858e-07f)) {
            k = 1.0f / sqrtf(len2);
            v[0] = v[0] * k;
            v[1] = v[1] * k;
            v[2] = v[2] * k;
        }
        func_2034E8(D_003EADC0 + e->index * 0xF0, out, v, e->f38);
    }
    o->state_45 = 3;
}
