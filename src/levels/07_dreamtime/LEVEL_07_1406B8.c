/* LEVEL_07:0x1406B8 -- placement copy of LEVEL_01_13D680.c: aims a probe from an attached object toward the actor: direction to the target, point offset in the actor frame, then flips the side flag. */

typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Actor {
    char pad_00[0x30];
    V3 pos;
    char pad_3C[9];
    unsigned char kind;
} Actor;

typedef struct Other {
    char pad_00[0x6C];
    void *target;
    char pad_70[0x70];
    int state;
    char pad_E4[0xC];
    unsigned char side;
    char pad_F1[2];
    unsigned char enabled;
    char pad_F4;
    unsigned char timer;
} Other;

extern V3 D_00230358;

extern float sqrtf(float x);
extern void func_082918(void *obj, V3 *out, int a, int b);
extern float func_07F120(Actor *a, float *m, int n);
extern int func_1453F8(V3 *dir, V3 *at, Other *o);

static __inline__ void V3Sub(V3 *o, V3 *a, V3 *b)
{
    o->x = a->x - b->x;
    o->y = a->y - b->y;
    o->z = a->z - b->z;
}

void func_1406B8(Actor *a, Other *o)
{
    V3 d;
    V3 p;
    float m[16];
    V3 at;
    float len2;
    float inv;
    float b;
    V3 *k;

    if (o->enabled != 0 && (unsigned int)(a->kind - 7) < 6 && o->state == 1) {
        if (o->target != 0) {
            func_082918(o->target, &p, 0, 0);
            V3Sub(&d, &p, &a->pos);
            len2 = d.x * d.x + d.y * d.y + d.z * d.z;
            if (!(len2 < 2.3841858e-07f)) {
                inv = 1.0f / sqrtf(len2);
                d.x = d.x * inv;
                d.y = d.y * inv;
                d.z = d.z * inv;
            }
            func_07F120(a, m, 3);
            k = &D_00230358;
            at.x = m[12] + m[0] * k->z;
            at.y = m[13] + m[1] * k->z;
            at.z = m[14] + m[2] * k->z;
            b = k->x;
            if (o->side == 0)
                b = -b;
            at.x = at.x + m[4] * b + m[8] * k->y;
            at.y = at.y + m[5] * b + m[9] * k->y;
            at.z = at.z + m[6] * b + m[10] * k->y;
            func_1453F8(&d, &at, o);
            o->timer = 0x3C;
            o->side = o->side == 0;
        }
    }
}
