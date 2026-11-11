/* LEVEL_02:0x1CE650 -- placement copy of LEVEL_01_1B0720.c: spawns an oriented table-entry object once the lifetime is long enough, fills its parameter block and registers it with the camera. */
typedef struct Entry {
    char pad_00[0x24];
    int hash;
    char pad_28[0x1C];
} Entry;

typedef struct Table {
    char pad_00[0x34];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct Cam {
    char pad_00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

typedef struct Params {
    int link;
    float dir[3];
    float life;
    float up[3];
    float scale;
    int tag;
} Params;

typedef struct Obj {
    char pad_00[0x58];
    Params *params;
    char pad_5C[0x14];
    float life;
} Obj;

typedef struct Owner {
    char pad_00[0x58];
    int *link;
} Owner;

extern Table *D_0021BD50;
extern float D_0022CE08[3];

extern Obj *func_082E40(Entry *e, int a, float *mat, int b);
extern Cam *func_024B98(int a);
extern void func_0872A0(void *obj, Cam *cam, float a, float b, float c, float d, int p6, int p7, int p8, int p9, int p10, int p11);

static __inline__ Entry *FindEntry(Table *t, int hash)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash) {
            return &t->entries[i];
        }
    }
    return 0;
}

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Cross(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

Obj *func_1CE650(float scale, float life, Owner *owner, float *rot, float *dir, int tag)
{
    float m[16];
    float *mp;
    int key;
    Entry *e;
    Obj *obj;
    Params *p;
    Cam *cam;

    if (life < 30.0f) {
        return 0;
    }
    key = 0x3795CB33;
    mp = m;
    m[8] = dir[0];
    m[9] = dir[1];
    m[10] = dir[2];
    m[4] = D_0022CE08[0];
    m[5] = D_0022CE08[1];
    m[6] = D_0022CE08[2];
    Cross(mp, D_0022CE08, dir);
    m[12] = rot[0];
    m[13] = rot[1];
    m[14] = rot[2];
    m[15] = rot[3];
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    e = FindEntry(D_0021BD50, key);
    if (e == 0) {
        obj = 0;
    } else {
        obj = func_082E40(e, 0, mp, 0xFF);
    }
    if (obj == 0) {
        return 0;
    }
    obj->life = life;
    p = obj->params;
    Copy3(p->dir, dir);
    Copy3(p->up, &m[4]);
    p->life = life;
    p->scale = scale;
    p->link = *owner->link;
    p->tag = tag;
    cam = func_024B98(0);
    if (cam != 0) {
        func_0872A0(obj, cam, cam->f14, cam->f18, cam->f1C, cam->f20, 0, 0, 0, 0, 0, 1);
    }
    return obj;
}
