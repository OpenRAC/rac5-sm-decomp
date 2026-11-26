/* LEVEL_05:0x17DF88 -- initializes an entity's grid node, normalized 2D forward vector, two sub-records, and optional pi-rotation matrix. */
extern void *memset(void *dst, int val, unsigned int n);
extern float sqrtf(float);

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0xC];
    int a_0C;
    int b_10;
    int c_14;
    char pad_18[0x1C];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
    char pad_08[0x37];
    unsigned char sel_3F;
} Cfg;

typedef struct {
    char pad_00[0x68];
} Entry;

typedef struct Obj Obj;

typedef struct {
    unsigned short h00;
    unsigned char b02;
    unsigned char b03;
    Obj *owner04;
    float dir08[2];
    unsigned char pad10[0x14];
    unsigned char sub24[2][0x28];
    unsigned char pad74[8];
} State58;

typedef struct {
    int off00;
    unsigned char flag04;
} Init54;

struct Obj {
    float mat00[4];
    float v10[4];
    float v20[4];
    float v30[4];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char pad_45[0xF];
    Init54 *p54;
    State58 *p58;
    unsigned char pad_5C[8];
    unsigned int flags_64;
    unsigned char pad_68[0xF];
    unsigned char b77;
};

extern int D_001F5E14;
extern Entry D_0021B3F8[];
extern void *D_003829F0;
extern char D_001F76C8[];

extern int func_07F460(Vec4 *p0, Vec4 *p1, Obj *o);
extern void func_092968(Entry *e, State58 *s, Vec4 *p0, Vec4 *p1, unsigned int fl);
extern void func_0E92E8(void *sub, void *a1, char *a2);
extern void func_11FD58(float *mat, float *axis, float angle);
extern void func_121498(Obj *dst, Obj *src, float *mat);

static __inline__ int ResolveOff(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_001F5E14 + *p;
    return 1;
}

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_17DF88(Obj *o)
{
    Init54 *p54;
    State58 *s;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int base;
    unsigned int alt;
    unsigned int fl;
    unsigned int fl2;
    int far;
    unsigned int i;

    p54 = o->p54;
    o->b77 = 0x32;
    s = o->p58;
    if (!ResolveOff(&p54->off00)) {
        return 0;
    }

    memset(s, 0, 0x7C);
    s->b02 = 2;
    s->h00 = 0xFFFF;
    s->owner04 = o;

    rec = &o->cfg_40->recs_04[o->idx_44];
    base = o->flags_64 & 0x1420;
    alt = base | 1;
    fl = base | 0x81;
    if (rec->a_0C == 0) {
        fl = alt;
    }
    if (rec->b_10 != 0) {
        fl |= 0x100;
    }
    if (rec->c_14 != 0) {
        fl |= 0x200;
    }
    if (o->cfg_40->sel_3F == 1) {
        fl |= 0x800;
    }
    if ((o->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    fl2 = fl | 0x10;
    if (func_07F460(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        s->b03 = far;
        func_092968(&D_0021B3F8[far], s, &p0, &p1, fl2);
    }

    {
        float *v = o->v20;
        float *d = s->dir08;
        float d2 = v[0] * v[0] + v[2] * v[2];
        if (!(d2 < 2.384185791015625e-07f)) {
            d2 = 1.0f / sqrtf(d2);
            d[0] = d2 * o->v20[0];
            d[1] = d2 * v[2];
        }
    }

    for (i = 0; i < 2; i++) {
        func_0E92E8(s->sub24[i], D_003829F0, D_001F76C8);
    }

    if (p54->flag04 != 0) {
        float mat[12];
        func_11FD58(mat, o->v10, 3.1415927410125732f);
        func_121498(o, o, mat);
    }
    return 1;
}
