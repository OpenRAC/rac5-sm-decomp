/* LEVEL_09:0x18EE98 -- follows the object's attach handle: advances it along the world table, and when the probe passes copies the attached object's matrix over its own; then re-initialises the proxy node, builds its flag word and registers it with the near or far pool entry; always returns 1. */
typedef struct Obj Obj;

typedef struct {
    float m[16];
} Mat;

typedef struct {
    Obj *attach;
    unsigned char b4;
    unsigned char b5;
} Info;

typedef struct {
    int w0;
    char pad4[0xE - 4];
    unsigned char kind;
    unsigned char far;
    Obj *owner;
    int link;
    int w18;
} Node;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Type;

typedef struct {
    char pad[0x68];
} Entry;

struct Obj {
    Mat m;
    Type *type;
    unsigned char idx;
    char pad45[0x54 - 0x45];
    Info *info;
    Node *node;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
};

extern char *D_001F0894;
extern Entry D_00216E78[];

extern int func_0183A0(void *a, void *b, unsigned short *c, unsigned char *out);
extern void func_07E810(float *a, float *b, Obj *o);
extern void func_091CC8(Entry *e, Node *n, float *a, float *b, unsigned int flags);

static __inline__ void CopyMat(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

static __inline__ int isFar(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dz = b[2] - a[2];

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_18EE98(Obj *o)
{
    unsigned char sb;
    Info *info;
    Node *n;
    Rec *rec;
    char *q;
    unsigned int fl;
    unsigned int base;
    int far;

    info = o->info;
    n = o->node;
    if (info->attach != 0) {
        q = D_001F0894 + (int)info->attach;
        if (*(int *)(q + 0x40) == 0) {
            info->attach = 0;
        } else {
            info->attach = (Obj *)q;
        }
    }
    sb = 0;
    if (info->b5 != 0) {
        if (info->attach != 0) {
            if (func_0183A0(0, 0, 0, &sb) != 0) {
                if (!(sb < info->b4)) {
                    CopyMat(o->m.m, info->attach->m.m);
                }
            }
        }
    }
    n->owner = o;
    n->kind = 2;
    n->w18 = 0;
    n->link = 0;
    n->w0 = 0;
    rec = &o->type->recs[o->idx];
    base = o->flags & 0x1420;
    fl = base | 1;
    if (rec->w0C != 0) {
        fl = base | 0x81;
    }
    if (rec->w10 != 0) {
        fl |= 0x100;
    }
    if (rec->w14 != 0) {
        fl |= 0x200;
    }
    if (o->type->b3F == 1) {
        fl |= 0x800;
    }
    if ((o->flags >> 3) & 1) {
        fl |= 0x400;
    }
    {
        float p0[4];
        float p1[4];

        if (((int (*)(float *, float *, Obj *))func_07E810)(p0, p1, o) != 0) {
            far = isFar(p0, p1);
            n->far = far;
            func_091CC8(&D_00216E78[far], n, p0, p1, fl);
        }
    }
    return 1;
}
