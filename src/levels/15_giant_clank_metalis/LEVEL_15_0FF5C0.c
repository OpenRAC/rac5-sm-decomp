/* LEVEL_15:0x0FF5C0 -- applies two half-angle rotations to the slots of a posed skeleton: for an animation in mode 2, each of two angles (the owner's angles plus the animation offsets, wrapped to +-pi) becomes the quaternion (axis * sin(half), cos(half)) around the configured axis and is applied to the indexed 0x30-byte slot. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Quat;

typedef struct {
    char pad_00[0x18];
    float yaw_18;
    char pad_1C[8];
    float pitch_24;
} Owner;

typedef struct {
    int mode_00;
    int idx_04;
    int idx_08;
    char pad_0C[0x78];
    float off_84;
    char pad_88[0x10];
    float off_98;
} Anim;

typedef struct {
    char pad_00[0x198];
    Vec3 axis_198;
    char pad_1A4[0x54];
    Vec3 axis_1F8;
} Cfg;

extern float cosf(float x);
extern float sqrtf(float x);
extern void func_0E8648(void *dst, void *src, Quat *q);

static __inline__ float Wrap(float a)
{
    if (a > 3.1415927f) {
        a = a - 6.2831855f;
    } else if (a < -3.1415927f) {
        a = a + 6.2831855f;
    }
    return a;
}

static __inline__ void HalfQuat(Quat *q, float angle, Vec3 *axis)
{
    float h;
    float c;
    float sn;

    h = angle * 0.5f;
    c = cosf(h);
    sn = sqrtf(1.0f - c * c);
    if (h < 0.0f) {
        sn = -sn;
    }
    q->x = axis->x * sn;
    q->y = axis->y * sn;
    q->z = axis->z * sn;
    q->w = c;
}

void func_0FF5C0(Owner *o, Anim *a, Cfg *cfg, char *base)
{
    Quat q1;
    Quat q2;
    float h;
    char *slot;
    int i;

    if (a->mode_00 == 2) {
        h = Wrap(o->yaw_18 + a->off_84);
        HalfQuat(&q1, h, &cfg->axis_198);
        i = a->idx_04;
        slot = base + i * 0x30;
        func_0E8648(slot, slot, &q1);
        h = Wrap(o->pitch_24 + a->off_98);
        HalfQuat(&q2, h, &cfg->axis_1F8);
        i = a->idx_08;
        slot = base + i * 0x30;
        func_0E8648(slot, slot, &q2);
    }
}
