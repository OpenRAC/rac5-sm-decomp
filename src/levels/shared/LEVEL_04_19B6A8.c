/* LEVEL_04:0x19B6A8 -- initialises the attached record: copies the direction, derives and normalizes its side vector, then stores the strength, the state byte and the owner link. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x1C];
    Vec3 dir;
    Vec3 side;
    float f_34;
    int w_38;
} Extra;

typedef struct {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x12];
    Extra *extra;
} Obj;

extern float sqrtf(float x);

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

void func_19B6A8(Obj *o, int link, Vec3 *dir, float f)
{
    Extra *e;

    e = o->extra;
    CopyVec(&e->dir.x, &dir->x);
    e->side.y = 0.0f;
    e->side.x = e->dir.z;
    e->side.z = -e->dir.x;
    Normalize3(&e->side.x);
    e->f_34 = f;
    o->b_45 = 3;
    e->w_38 = link;
}
