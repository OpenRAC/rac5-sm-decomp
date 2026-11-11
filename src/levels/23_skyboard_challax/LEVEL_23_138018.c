/* LEVEL_23:0x138018 -- placement copy of LEVEL_22_110C60.c: spawns two effects at an object's position: a scaled marker through a matrix and a burst record. */

typedef struct Mat {
    float r0[3];
    float w0;
    float r1[3];
    float w1;
    float r2[3];
    float w2;
    float t[3];
    float w3;
} Mat;

typedef struct Rec {
    float pos[3];
    float w;
    float size;
    float aux;
    float drift;
    char *name;
} Rec;

typedef struct Burst {
    float pos[3];
    float w;
    float size;
    float aux;
    float scale;
    float life;
    char *name;
} Burst;

typedef struct Ctx {
    char pad_00[0x158];
    int h0;
    int h1;
    int h2;
} Ctx;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x18];
    float *link;
} Obj;

extern Ctx D_00362E90;
extern Burst D_00363010;
extern char D_001EF6A0[];
extern char D_001EF6C8[];
extern char D_002071D0[];
extern char D_001E23B0[];

extern void func_117248(float x, float y, float z, float *a, float *b, float *c);
extern void func_06BDC8(Mat *m, char *a, char *b);
extern void func_1B3268(float u, float v, int a, int b, Rec *r, int n);
extern void func_1B7AD8(int a, Burst *b, int n);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_138018(Obj *o)
{
    Mat m;
    Rec r;
    float s;
    float *tp;

    s = *o->link * 3.0f;
    func_117248(s, s, s, m.r0, m.r1, m.r2);
    m.w2 = 0.0f;
    m.w1 = 0.0f;
    m.w0 = 0.0f;
    tp = m.t;
    tp[0] = 0.0f;
    tp[1] = 0.0f;
    tp[2] = 0.0f;
    tp[3] = 1.0f;
    Copy3(m.t, o->pos);
    func_06BDC8(&m, D_002071D0, D_001E23B0);
    Copy3(r.pos, o->pos);
    r.w = 0.0f;
    r.size = 3.0f;
    r.aux = 0.0f;
    r.name = D_001EF6A0;
    r.drift = -0.9f;
    func_1B3268(0.0f, 0.0f, D_00362E90.h0, D_00362E90.h1, &r, 0x1E);
    Copy3(D_00363010.pos, o->pos);
    D_00363010.w = 0.0f;
    D_00363010.size = 3.0f;
    D_00363010.aux = 0.0f;
    D_00363010.scale = 1.0f;
    D_00363010.life = 0.2f;
    D_00363010.name = D_001EF6C8;
    func_1B7AD8(D_00362E90.h2, &D_00363010, 0x78);
}
