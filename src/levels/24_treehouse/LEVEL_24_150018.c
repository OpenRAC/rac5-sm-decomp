/* LEVEL_24:0x150018 -- placement copy of LEVEL_01_1644F0.c: notifies nearby objects of an event at a point. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x20];
    int (*fn)(Obj *o, int a, int b, float *pos, float f, float *dir, Obj *src);
} VTable;

typedef struct {
    int kind;
    float f;
    int a;
    int b;
} Entry;

typedef struct {
    char pad0[0x59C];
    Obj *owner;
} Root;

typedef struct {
    Root *root;
    char pad4[4];
    int idx;
} Info;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    VTable *vt;
    char pad44[0x14];
    Info *info;
};

extern Entry D_001E9AD8[];
extern int func_01A9D8(Obj **out, int a, float *p, int b, int c, int d, int e, float f);
extern void func_014E20(Root *r, int a, Obj *o, int ret);
extern float sqrtf(float);

void func_150018(Obj *a, float *p)
{
    Obj *list[16];
    Info *info = a->info;
    unsigned int n;
    unsigned int i;

    n = func_01A9D8(list, 0x10, p, 0x129, 0x101, 0x36, 1, 2.0f);
    for (i = 0; i < n; i++) {
        Obj *o = list[i];
        Entry *e;
        float d[3];
        float len;
        float *op;
        float inv;
        float f;
        int r;

        if (o == a->info->root->owner)
            continue;
        if (!o->vt->fn)
            continue;
        op = o->pos;
        d[0] = p[0] - op[0];
        d[1] = p[1] - op[1];
        d[2] = p[2] - op[2];
        len = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        if (!(len < 0x1p-22f)) {
            inv = 1.0f / sqrtf(len);
            d[0] = d[0] * inv;
            d[1] = d[1] * inv;
            d[2] = d[2] * inv;
        }
        e = (Entry *)((char *)D_001E9AD8 + ((info->idx + 0xAE) << 4));
        switch (e->kind) {
        case 0:
        case 1:
            f = e->f;
            break;
        case 2:
            f = e->f * 0.5f;
            break;
        default:
            f = e->f;
            break;
        }
        r = o->vt->fn(o, e->a, e->b, a->pos, f, d, a);
        func_014E20(a->info->root, 9, o, r);
    }
}
