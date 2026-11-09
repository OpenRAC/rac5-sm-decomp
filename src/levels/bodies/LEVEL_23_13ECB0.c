/* LEVEL_23:0x13ECB0 -- distance-to-target check and visibility test over a table of objects. */
typedef struct {
    char pad0[0xAC];
    float dist;
    float limit;
} Info;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad1[0x45 - 0x3C];
    unsigned char state;
    char pad2[0x58 - 0x46];
    Info *info;
} Obj;

typedef struct {
    char pad0[0x30];
    float pos[3];
} Anchor;

extern Anchor D_002025C0;

extern void func_13EBB8(Obj *o, int state, int mode);

static inline void VecCopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static inline float DistSq(float *a, float *b)
{
    float x = a[0] - b[0];
    float y = a[1] - b[1];
    float z = a[2] - b[2];

    return x * x + y * y + z * z;
}

static inline void Check(Obj *o, Anchor *a)
{
    float t[3];
    float dist;
    Info *i;

    VecCopy(t, a->pos);
    t[1] += 0.75f;
    i = o->info;
    if (a) {
        dist = DistSq(o->pos, t);
        i->dist = dist;
        if (dist <= i->limit) {
            func_13EBB8(o, o->state, 3);
        }
    }
}

void func_13ECB0(Obj *o)
{
    Check(o, &D_002025C0);
}

typedef struct {
    char pad0[0x30];
    float pts[8][3];
    char pad1[0x9C - 0x90];
    unsigned char seen;
} Pts;

typedef struct {
    char pad0[0x58];
    Pts *pts;
} Ent;

typedef struct {
    Ent *ent[32];
    int count;
} Table;

typedef struct {
    char pad0[0x60];
    float plane[5][4];
} View;

extern Table D_00363618;
extern View *D_001C9540;

static inline unsigned char Inside(float *p)
{
    float *q;

    q = D_001C9540->plane[0];
    do {
        if (p[0] * q[0] + p[1] * q[1] + p[2] * q[2] + q[3] < -3.0f) {
            return 0;
        }
        q += 4;
    } while (q != D_001C9540->plane[5]);
    return 1;
}

void func_13ED50(void)
{
    int i;
    unsigned char j;
    Ent *e;
    Pts *b;

    for (i = 0; i < D_00363618.count; i++) {
        e = D_00363618.ent[i];
        if (e == 0) {
            continue;
        }
        b = e->pts;
        b->seen = 0;
        for (j = 0; j < 8; j++) {
            if (Inside(b->pts[j])) {
                b->seen = 1;
                j = 8;
            }
        }
    }
    D_00363618.count = 0;
}
