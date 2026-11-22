/* LEVEL_03:0x1CCBB0 -- placement copy of LEVEL_01_1B7AC0.c: snapshots an object's matrix into the shared camera block, refreshes its table flags, and re-aims the camera on it. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad00[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x1C];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tbl;
    char pad08[0x37];
    unsigned char cat;
} Kind;

typedef struct {
    unsigned short slot;
    unsigned char pad02;
    unsigned char list;
} Handle;

typedef struct {
    int pad00;
    char pad04[0x64];
    short *recs;
} List;

typedef struct {
    float m[8];
    float r[4];
    Vec3 pos;
    float w;
    Kind *kind;
    unsigned char idx;
    unsigned char state;
    char pad46[0x12];
    Handle *h;
    char pad5C[8];
    int flags;
    char pad68[8];
    float f70;
} Obj;

typedef struct {
    float m[16];
    char pad40[0x2DC - 0x40];
    float t2DC;
    float t2E0;
    char pad2E4[0x59C - 0x2E4];
    float *dst;
} Cam;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void AddTo(float *p, float k)
{
    *p = *p + k;
}

extern Cam D_0024FFC0;
typedef struct {
    char pad00[0x64];
    char *recs;
} ListEnt;

extern ListEnt D_0024A578[];
extern char D_003B3710[];
extern char D_00243460[];
extern void func_0039A8(float v, int a, int b);
extern void func_0039D0(float v, int a, int b);
extern void func_003A00(float v, int a, int b);
extern void func_003A28(float v, int a, int b);
extern void func_003198(float rate, Vec3 *pos, int snap);
extern void func_0033A8(float *m);
extern void func_0038F0(float v, float *m, int a, int b);
extern void func_0754F8(char *a, char *b, Vec3 *v, Obj *o, Obj *o2);

void func_1CCBB0(float dt, Obj *o)
{
    Vec3 v;
    int fl;
    unsigned int bits;
    unsigned int keep;
    Entry *ent;
    unsigned int off;
    float *d;
    float *r;
    Vec3 *pos;
    float t;

    fl = o->flags;
    if (fl & 0x20) {
        o->flags = fl & ~0x20;
        ent = (Entry *)((char *)o->kind->tbl + o->idx * 0x34);
        keep = fl & 0x1400;
        bits = keep | 0x81;
        keep |= 1;
        if (ent->w0C == 0) {
            bits = keep;
        }
        if (ent->w10 != 0) {
            bits |= 0x100;
        }
        if (ent->w14 != 0) {
            bits |= 0x200;
        }
        if (o->kind->cat == 1) {
            bits |= 0x800;
        }
        if ((((unsigned int)(fl & ~0x20)) >> 3) & 1) {
            bits |= 0x400;
        }
        if (o->h->slot != 0xFFFF) {
            off = o->h->slot * 16;
            *(unsigned short *)(D_0024A578[o->h->list].recs + off + 8) = bits;
        }
    }
    r = o->r;
    o->state = 6;
    D_0024FFC0.m[8] = o->r[0];
    D_0024FFC0.m[9] = o->r[1];
    D_0024FFC0.m[10] = o->r[2];
    D_0024FFC0.m[11] = o->r[3];
    D_0024FFC0.m[0] = o->m[0];
    D_0024FFC0.m[1] = o->m[1];
    D_0024FFC0.m[2] = o->m[2];
    D_0024FFC0.m[3] = o->m[3];
    D_0024FFC0.m[4] = o->m[4];
    D_0024FFC0.m[5] = o->m[5];
    D_0024FFC0.m[6] = o->m[6];
    D_0024FFC0.m[7] = o->m[7];
    D_0024FFC0.m[12] = o->pos.x;
    t = o->pos.y + dt;
    D_0024FFC0.m[13] = o->pos.y;
    D_0024FFC0.m[14] = o->pos.z;
    D_0024FFC0.m[15] = o->w;
    D_0024FFC0.m[13] = t;
    D_0024FFC0.t2DC = t;
    D_0024FFC0.t2E0 = t;
    d = D_0024FFC0.dst;
    d[8] = D_0024FFC0.m[8];
    d[9] = D_0024FFC0.m[9];
    d[10] = D_0024FFC0.m[10];
    d[11] = D_0024FFC0.m[11];
    d[0] = D_0024FFC0.m[0];
    d[1] = D_0024FFC0.m[1];
    d[2] = D_0024FFC0.m[2];
    d[3] = D_0024FFC0.m[3];
    d[4] = D_0024FFC0.m[4];
    d[5] = D_0024FFC0.m[5];
    d[6] = D_0024FFC0.m[6];
    d[7] = D_0024FFC0.m[7];
    d[12] = D_0024FFC0.m[12];
    d[13] = D_0024FFC0.m[13];
    d[14] = D_0024FFC0.m[14];
    d[15] = D_0024FFC0.m[15];
    o->f70 = 30.0f;
    Copy3(&v.x, &o->pos.x);
    pos = &o->pos;
    AddTo(&v.y, 1.761f);
    func_0039A8(1.0f, 0, 3);
    func_0039D0(1.0f, 0, 3);
    func_003A00(1.0f, 0, 3);
    func_003A28(1.0f, 0, 3);
    func_003198(0.0f, pos, 1);
    func_0033A8(r);
    func_0038F0(1.0f, r, 0, 3);
    func_0754F8(D_003B3710, D_00243460, &v, o, o);
}
