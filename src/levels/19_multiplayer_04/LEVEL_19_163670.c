/* LEVEL_19:0x163670 -- placement copy of LEVEL_16_1642C8.c: picks the reference point from a flag field, measures the horizontal distance to it, and steps a three-state blend value up or down. */

struct Info1642C8 {
    char pad0[8];
    float f08;
    unsigned int w0C;
};

struct Obj1642C8 {
    char pad0[0x30];
    float pos[3];
    char pad3C[0xA];
    unsigned char b46;
    char pad47[0x11];
    struct Info1642C8 *info;
};

struct Pt1642C8 {
    char pad0[0x30];
    float pos[3];
};

extern struct Pt1642C8 D_001E4210;
extern struct Pt1642C8 D_001E7C00;

static __inline__ void Sub1642C8(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ float *Max1642C8(float *a, float *b)
{
    if (*a < *b) {
        return b;
    }
    return a;
}

void func_163670(struct Obj1642C8 *o)
{
    struct Info1642C8 *info;
    struct Pt1642C8 *p;
    float d[3];
    float zero;
    float dist2;

    info = o->info;
    switch (info->w0C >> 1) {
    case 1:
        p = &D_001E7C00;
        break;
    case 0:
    default:
        p = &D_001E4210;
        break;
    }
    Sub1642C8(d, p->pos, o->pos);
    dist2 = d[0] * d[0] + d[2] * d[2];
    if (dist2 < 64.0f) {
        o->b46 = 2;
    }
    if (o->b46 == 2) {
        if (info->f08 != 0.0f) {
            info->f08 = info->f08 - 0.04999900236725807f;
        }
        zero = 0.0f;
        info->f08 = *Max1642C8(&zero, &info->f08);
        if (64.0f < dist2) {
            o->b46 = 0;
        }
    } else if (o->b46 == 1) {
        info->f08 = info->f08 - 0.04999900236725807f;
        if (info->f08 <= 0.15000000596046448f) {
            o->b46 = 0;
        }
    } else if (o->b46 == 0) {
        info->f08 = info->f08 + 0.04999900236725807f;
        if (0.800000011920929f <= info->f08) {
            o->b46 = 1;
        }
    }
}
