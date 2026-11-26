/* LEVEL_05:0x045BC8 -- placement copy of LEVEL_01_047FC8.c: refreshes the hero's flattened move direction and speed, then picks the animation rate for the current state before applying it. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    Vec4 v;
    float speed;
} Move;

typedef struct {
    float spd_00;
    float f_04;
    char pad_08[0xC];
    float f_14;
    char pad_18[4];
} Gear;

typedef struct {
    char pad_00[0xC0];
    Move move_C0;
    char pad_D4[0x100 - 0xD4];
    short state_100;
    char pad_102[0x210 - 0x102];
    float dir_210[3];
    char pad_21C[0x240 - 0x21C];
    float rate_240;
    char pad_244[0x26C - 0x244];
    float speed_26C;
    char pad_270[0x960 - 0x270];
    unsigned long long flags_960;
} Hero;

extern Gear D_001E39B8[];
extern float sqrtf(float x);
extern void func_0462A0(Hero *h);

static __inline__ void Normalize(float *out, Vec4 *v)
{
    float len2;
    float inv;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (len2 < 2.384185791015625e-07f) {
        return;
    }
    inv = 1.0f / sqrtf(len2);
    out[0] = inv * v->x;
    out[1] = inv * v->y;
    out[2] = inv * v->z;
}

void func_045BC8(Hero *h)
{
    Move *m;
    Vec4 v;
    float speed;
    int k;

    m = &h->move_C0;
    if (m != 0) {
        speed = m->speed;
        v = m->v;
        if (speed != 0.0f) {
            v.y = 0.0f;
            Normalize(h->dir_210, &v);
        }
        h->speed_26C = speed;
        if (h->state_100 == 15) {
            h->rate_240 = 0.030000001192092896f;
        } else if (h->state_100 == 59) {
            if (speed == 0.0f) {
                k = 0;
            } else {
                k = 2;
            }
            h->rate_240 = D_001E39B8[k].spd_00 * 1.2000000476837158f * 0.5f;
        } else if (speed == 0.0f) {
            h->rate_240 = 0.0f;
        } else if (h->flags_960 & 0x10000000000LL) {
            h->rate_240 = D_001E39B8[4].f_04 * 1.2000000476837158f;
        } else if (h->state_100 == 52) {
            h->rate_240 = D_001E39B8[6].f_04 * 2.75f;
        } else if (h->state_100 == 73) {
            h->rate_240 = 0.06000000238418579f;
        } else {
            k = (speed < D_001E39B8[1].f_14) ? 1 : 2;
            h->rate_240 = D_001E39B8[k].spd_00 * 1.2000000476837158f;
        }
    }
    func_0462A0(h);
}
