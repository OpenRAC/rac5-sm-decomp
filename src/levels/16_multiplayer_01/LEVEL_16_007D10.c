/* LEVEL_16:0x007D10 -- placement copy of LEVEL_01_008128.c: blends two poses: slerped rotation (normalized), lerped position and scales, yaw taken the short way round. */

typedef struct Quat {
    float x, y, z, w;
} Quat;

typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Pose {
    Quat q;
    Vec3 p;
    float yaw;
    float s0;
    float s1;
} Pose;

extern void func_1027B8(Quat *out, Pose *a, Pose *b, float t);
extern void func_102C90(Quat *q);

static __inline__ void Vec3Copy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_007D10(Pose *out, float t, Pose *a, Pose *b)
{
    Quat q;
    Vec3 p;
    float diff;
    float inv;
    float yaw;
    float s0;
    float s1;

    diff = b->yaw - a->yaw;
    if (diff > 3.1415927f)
        diff = diff - 6.2831855f;
    else if (diff < -3.1415927f)
        diff = diff + 6.2831855f;
    inv = 1.0f - t;
    func_1027B8(&q, a, b, t);
    func_102C90(&q);
    p.x = a->p.x * inv + b->p.x * t;
    p.y = a->p.y * inv + b->p.y * t;
    p.z = a->p.z * inv + b->p.z * t;
    yaw = a->yaw + diff * t;
    if (yaw > 3.1415927f)
        yaw = yaw - 6.2831855f;
    else if (yaw < -3.1415927f)
        yaw = yaw + 6.2831855f;
    s0 = a->s0 * inv + b->s0 * t;
    s1 = a->s1 * inv + b->s1 * t;
    out->q = q;
    Vec3Copy(&out->p, &p);
    out->yaw = yaw;
    out->s0 = s0;
    out->s1 = s1;
}
