/* LEVEL_04:0x034C28 -- placement copy of LEVEL_02_037CF0.c: initialises the attached helper record: copies the direction, derives and normalizes its side vector, stores the start position and strength, then runs the attach routine. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x1C];
    Vec3 side;
    float f_28;
    Vec3 pos;
    Vec3 dir;
    float f_44;
    int w_48;
    char pad_4C[4];
    unsigned char b_50;
    unsigned char b_51;
} Extra;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[0x1C];
    Extra *extra;
} Obj;

extern float sqrtf(float x);
extern void func_0353A8(Obj *o, Extra *e);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Normalize3(float *v)
{
    float len2;
    float len;
    float scale;

    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.384185791015625e-07f) {
        return;
    }
    len = sqrtf(len2);
    scale = 1.0f / len;
    v[0] = v[0] * scale;
    v[1] = v[1] * scale;
    v[2] = v[2] * scale;
}

void func_034C28(Obj *o, Vec3 *dir, float f)
{
    Extra *e;

    e = o->extra;
    e->b_51 = 1;
    CopyVec(&e->dir.x, &dir->x);
    e->side.y = 0.0f;
    e->side.x = e->dir.z;
    e->side.z = -e->dir.x;
    Normalize3(&e->side.x);
    e->f_44 = f;
    e->f_28 = 0.8377581238746643f;
    e->b_50 = 0;
    CopyVec(&e->pos.x, &o->pos.x);
    func_0353A8(o, e);
    e->w_48 = 0;
}
