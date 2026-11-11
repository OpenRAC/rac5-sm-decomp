/* LEVEL_02:0x15F828 -- aims the tracker at its target: stores the offset, its length and the unit direction. */
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Target {
    char pad0[0x30];
    struct Vec3 pos;
    char pad1[0x45 - 0x3C];
    unsigned char kind;
};

struct Slot {
    struct Target *target;
};

struct Aim {
    char pad0[4];
    struct Target *want;
    char pad1[0x30 - 8];
    struct Vec3 dir;
    float len;
    char pad2[0xA0 - 0x40];
    float len2;
};

struct Obj {
    char pad0[0x30];
    struct Vec3 pos;
    char pad1[0x54 - 0x3C];
    struct Aim *aim;
    struct Slot *slot;
};

extern float sqrtf(float x);
extern void func_1698B8(struct Target *t, int kind, int n);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_15F828(struct Obj *o)
{
    struct Aim *aim;
    struct Slot *slot;
    struct Target *want;
    float *dir;
    float l2;
    float len;
    float out;
    float inv;

    aim = o->aim;
    slot = o->slot;
    want = aim->want;
    if (want == 0) {
        return;
    }
    slot->target = want;
    func_1698B8(want, want->kind, 3);
    dir = &aim->dir.x;
    Sub3(dir, &slot->target->pos.x, &o->pos.x);
    l2 = dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2];
    if (l2 < 2.384185791015625e-07f) {
        out = 0.0f;
    } else {
        len = sqrtf(l2);
        inv = 1.0f / len;
        dir[0] *= inv;
        dir[1] *= inv;
        dir[2] *= inv;
        out = len;
    }
    aim->len = out;
    aim->len2 = out;
}
