/* LEVEL_03:0x1C4CC0 -- spawns an effect at a random point on a small sphere around one of four anchor points (chosen by a toggling flag and the object's resource id), with a fixed direction record. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[0x104];
    unsigned char flag;
} Sub;

typedef struct {
    char pad00[0x20];
    int id;
    char pad24[0x10];
} Ent;

typedef struct {
    char pad00[4];
    Ent *ents;
} Tbl;

typedef struct {
    char pad00[0x40];
    Tbl *tbl;
    unsigned char idx;
    char pad45[0x13];
    Sub *sub;
} Obj;

extern Vec4 D_00242800[4];

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern void *memset(void *p, int c, unsigned int n);

extern void func_1C4F28(Obj *o, int pos, int dir);

static __inline__ void Add3(Vec3 *d, Vec4 *b)
{
    d->x = d->x + b->x;
    d->y = d->y + b->y;
    d->z = d->z + b->z;
}

void func_1C4CC0(Obj *o)
{
    Vec4 dir;
    Vec3 pos;
    Sub *s;
    float angle;
    float c;
    float sn;
    float r;
    unsigned char on;

    s = o->sub;
    if (s != 0) {
        memset(&dir, 0, sizeof(dir));
        dir.x = -1.0f;
        pos.z = (float)rand() * 9.313226e-10f - 1.0f;
        angle = (float)rand() * 2.9258362e-09f - 3.1415927f;
        c = cosf(angle);
        sn = sqrtf(1.0f - c * c);
        if (angle < 0.0f) {
            sn = -sn;
        }
        r = sqrtf(1.0f - pos.z * pos.z);
        pos.x = c * r * 0.02f;
        pos.y = sn * r * 0.02f;
        pos.z = pos.z * 0.02f;
        on = (s->flag == 0);
        s->flag = on;
        if (on) {
            if (o->tbl->ents[o->idx].id == 0x5AAB9A60) {
                Add3(&pos, &D_00242800[2]);
            } else {
                Add3(&pos, &D_00242800[0]);
            }
        } else {
            if (o->tbl->ents[o->idx].id == 0x5AAB9A60) {
                Add3(&pos, &D_00242800[3]);
            } else {
                Add3(&pos, &D_00242800[1]);
            }
        }
        func_1C4F28(o, (int)&pos, (int)&dir);
    }
}
