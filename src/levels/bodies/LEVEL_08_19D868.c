/* LEVEL_08:0x19D868 -- placement copy of LEVEL_06_16E2A8.c: casts a short probe from the object's raised position toward the raised point returned by the camera helper and reports whether the line is clear; the object's busy bit is held while the probe runs. */
extern float sqrtf(float x);

typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Kind {
    char pad00[0x3F];
    unsigned char kind;
} Kind;

typedef struct Target {
    char pad00[0x40];
    Kind *kind;
} Target;

typedef struct Hit {
    char pad00[0x10];
    Target *target;
    int type;
    char pad18[8];
} Hit;

typedef struct Info {
    char pad00[0x0C];
    unsigned short flags;
} Info;

typedef struct Self {
    char pad00[0x30];
    V3 pos;
    char pad3C[0x58 - 0x3C];
    Info *info;
} Self;

extern V3 *func_01ACA0(void);
extern int func_021658(float range, void *buf, Hit *hit, V3 *from, V3 *dir, int mask, int a5, int a6);

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_19D868(Self *self, V3 *out)
{
    V3 to;
    V3 from;
    Hit hit;
    V3 dir;
    float buf[4];
    Info *info;
    V3 *tgt;
    float inv;
    int kind;

    info = self->info;
    tgt = func_01ACA0();
    CopyV3(&to, tgt);
    to.y = to.y + 1.0f;
    CopyV3(&from, &self->pos);
    from.y = from.y + 1.0f;
    if (out != 0) {
        CopyV3(out, &from);
    }
    dir.x = to.x - from.x;
    dir.y = to.y - from.y;
    dir.z = to.z - from.z;
    inv = 1.0f / sqrtf(dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
    dir.x = dir.x * inv;
    dir.y = dir.y * inv;
    dir.z = dir.z * inv;
    to.x = to.x + dir.x;
    to.y = to.y + dir.y;
    to.z = to.z + dir.z;
    info->flags = info->flags | 8;
    if (func_021658(3.0f, buf, &hit, &from, &dir, 0x828, 0, 0) != 0) {
        info->flags = info->flags & 0xFFF7;
        if (hit.type != 2) {
            return 0;
        }
        kind = hit.target->kind->kind;
        if (kind != 5 && kind != 1) {
            return 1;
        }
    }
    info->flags = info->flags & 0xFFF7;
    return 1;
}
