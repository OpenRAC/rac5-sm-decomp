/* USA LEVEL_16.REL:0x12FEB0, 472-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x1C];
    int idx_1C;
} Info;

typedef struct {
    char pad_00[0x20];
    Vec3 n_20;
    char pad_2C[4];
    Vec3 pos_30;
    char pad_3C[0x1C];
    Info *info_58;
} Obj;

typedef struct {
    float p[3];
    float a;
    float b;
    float n[3];
    float c;
    void *tab;
} Light;

typedef struct {
    char pad_00[0x24];
    int w_24;
    char pad_28[0x20];
} Row;

typedef struct {
    char pad_00[0x28];
    int w_28;
} Slot;

extern int D_001BD57C;
extern Slot D_001BD588;
extern Row D_001D1480[];

static __inline__ void copy3(float *d, Vec3 *s)
{
    d[0] = s->x;
    d[1] = s->y;
    d[2] = s->z;
}

static __inline__ void neg3(float *d, Vec3 *s)
{
    d[0] = -s->x;
    d[1] = -s->y;
    d[2] = -s->z;
}

extern void func_0E6278(int id, Light *l, int flag, float a, float b);

void func_12FEB0(Obj *o, float *p)
{
    Light l;

    if (D_001BD57C >= 0) {
        copy3(l.p, &o->pos_30);
        l.a = 0.5f;
        l.b = 0.55f;
        neg3(l.n, &o->n_20);
        l.c = 0.98f;
        D_001BD588.w_28 = D_001D1480[o->info_58->idx_1C].w_24;
        l.tab = &D_001BD588;
        func_0E6278(D_001BD57C, &l, 1, 0.0f, 0.0f);
        l.p[0] = (o->pos_30.x - p[0]) * 0.3f + p[0];
        l.p[1] = (o->pos_30.y - p[1]) * 0.3f + p[1];
        l.p[2] = (o->pos_30.z - p[2]) * 0.3f + p[2];
        func_0E6278(D_001BD57C, &l, 1, 0.0f, 0.0f);
        l.p[0] = (o->pos_30.x - p[0]) * 0.6f + p[0];
        l.p[1] = (o->pos_30.y - p[1]) * 0.6f + p[1];
        l.p[2] = (o->pos_30.z - p[2]) * 0.6f + p[2];
        func_0E6278(D_001BD57C, &l, 1, 0.0f, 0.0f);
    }
}
