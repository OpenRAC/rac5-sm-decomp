/* LEVEL_16:0x156DE8 -- looks (up to ten tries) for a random point on a ring around the object that lies within 16 units of the owner's target and passes a visibility probe; writes the point (or, when every try fails, the object's own position) to out. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, w; } Vec4;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Target;

typedef struct {
    char pad00[0x50];
    Target *target;
} State;

typedef struct {
    char pad00[0x30];
    Vec4 pos;
    char pad40[0x54 - 0x40];
    char *info;
    State *state;
} Obj;

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern int func_02E890(float scale, char *info, Vec4 *pos, int mode);

static __inline__ void Copy4(Vec4 *d, Vec4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void AddZ(Vec4 *d, Vec4 *s)
{
    d->z += s->z;
}

void func_156DE8(float lo, float hi, Obj *obj, Vec4 *out)
{
    Vec4 pos;
    Vec3 d;
    char *info;
    State *st;
    unsigned int i;
    float ang;
    float len;
    float span;

    pos.w = 0.0f;
    pos.y = obj->pos.y;
    info = obj->info;
    st = obj->state;
    for (i = 0; i < 10; i++) {
        ang = (float)rand() * 4.656612873077393e-10f;
        ang += ang;
        ang *= 3.1415927410125732f;
        span = hi - lo;
        pos.x = cosf(ang);
        pos.z = sinf(ang);
        len = lo + span * ((float)rand() * 4.656612873077393e-10f);
        pos.x = pos.x * len + obj->pos.x;
        pos.z = pos.z * len;
        AddZ(&pos, &obj->pos);
        Copy3(&d, &st->target->pos);
        d.x -= pos.x;
        d.z -= pos.z;
        if (d.x * d.x + d.z * d.z <= 256.0f && func_02E890(0.75f, info + 4, &pos, 1) != 0) {
            Copy4(out, &pos);
            return;
        }
    }
    Copy4(out, &obj->pos);
}
