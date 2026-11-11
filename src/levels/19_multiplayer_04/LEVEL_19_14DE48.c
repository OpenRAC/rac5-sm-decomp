/* LEVEL_19:0x14DE48 -- placement copy of LEVEL_16_150F70.c: aims a node's basis vectors from a source (or defaults), then prints two labels. */
typedef struct {
    int w0;
    char *s4;
    float v[3];
    float c[3];
    int w20;
} Node;
typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad1[0x58 - 0x46];
    Node *node;
    char pad2[0x70 - 0x5C];
    int w70;
} Obj;
typedef struct {
    char pad0[0x298];
    float dir[3];
} Src;

extern float D_001CDF48[3];
extern float D_001CDF38[3];
extern char D_002E52A0[];

static inline void Scale3(float *d, float *s, float k)
{
    d[0] = s[0] * k;
    d[1] = s[1] * k;
    d[2] = s[2] * k;
}

static inline void Cross3(float *o, float *a, float *b)
{
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
}

static inline void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

extern float sqrtf(float x);
extern void func_037490(Src *s);
extern void func_117C68(Src *s);
extern char *func_10F9D0(int id);
extern char *func_115AF8(char *p);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A78A8(int i, char *buf, int z, int n);

void func_14DE48(Obj *o, Src *src)
{
    Node *n;
    float *c;
    float len2;
    float inv;
    char *fmt;
    int i;

    n = o->node;
    n->w20 = 0;
    o->w70 = 0;
    if (src != 0) {
        c = n->c;
        Scale3(n->v, src->dir, 30.0f);
        n->v[1] = 0.0f;
        Cross3(c, D_001CDF48, n->v);
        len2 = c[0] * c[0] + c[1] * c[1] + c[2] * c[2];
        if (!(len2 < 2.384185791015625e-07f)) {
            inv = 1.0f / sqrtf(len2);
            c[0] = c[0] * inv;
            c[1] = c[1] * inv;
            c[2] = c[2] * inv;
        }
        func_037490(src);
        func_117C68(src);
    } else {
        Copy3(n->v, D_001CDF38);
        Copy3(n->c, D_001CDF48);
    }
    fmt = func_10F9D0(0x69D);
    sprintf(D_002E52A0, fmt, func_115AF8(n->s4));
    for (i = 0; i < 2; i++)
        func_0A78A8(i, D_002E52A0, 0, 0x5A);
    o->state = 3;
    n->w0 = 0;
}
