/* LEVEL_08:0x1AE058 -- placement copy of LEVEL_04_197438.c: finds the table entry with a fixed id, spawns an effect record from it and fills in its position, owner and launch parameters. */
typedef struct {
    char pad0[0x24];
    int id;
    char pad28[0x1C];
} Entry;

typedef struct {
    char pad0[0x34];
    Entry *recs;
    unsigned int count;
} Table;

typedef struct {
    char pad0[0x30];
    float pos[4];
} Obj;

typedef struct {
    Obj **owner;
    float a;
    float b;
    int f_0C;
    int *f_10;
    Obj *f_14;
    int f_18;
    int f_1C;
} Fields;

typedef struct {
    char pad0[0x20];
    float p[3];
    char pad2C[4];
    float q[4];
    char pad40[0x18];
    Fields *fields;
} Rec;

extern Table *D_0024FC50;
extern char D_00261B08[];

extern Rec *func_0844E0(Entry *e, unsigned int key, int a, int b);
extern void func_073720(int a, int b, float *p, float *q, char *c);

static __inline__ void Vec3_Copy(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Vec4_Copy(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

static __inline__ Entry *FindEntry(Table *t, unsigned int id)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->recs[i].id == id) {
            return &t->recs[i];
        }
    }
    return 0;
}

Rec *func_1AE058(float a, float b, Obj *o, Obj **owner, int c, int *q, int d)
{
    Entry *e;
    Rec *r;
    Fields *f;

    e = FindEntry(D_0024FC50, 0xC0C773ED);
    if (e == 0) {
        r = 0;
    } else {
        r = func_0844E0(e, 0xC0C773ED, 0, 0xFF);
    }
    if (r == 0) {
        return 0;
    }
    f = r->fields;
    f->a = a;
    f->b = b;
    f->f_14 = o;
    f->owner = owner;
    Vec3_Copy(r->p, o->pos);
    r->p[1] += f->a;
    Vec4_Copy(r->q, (*owner)->pos);
    r->q[1] += f->a;
    f->f_18 = c;
    f->f_10 = q;
    func_073720(f->f_0C, *q, r->p, r->q, D_00261B08);
    f->f_1C = d;
    return r;
}
