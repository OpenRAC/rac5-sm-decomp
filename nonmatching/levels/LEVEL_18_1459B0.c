/* USA LEVEL_18.REL:0x1459B0, 444-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 11 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[8];
    unsigned short flags;
    char pad0A[6];
} Entry;

typedef struct {
    char pad00[0x64];
    Entry *entries;
} Row;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Body;

typedef struct {
    unsigned short index;
    char pad02;
    unsigned char row;
    char pad04[0x2C];
    Body *target;
} Info;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x1C];
    Info *info;
} Obj;

extern Row D_001DE778[];
extern int func_01E238(float len, float *range, void *buf, void *who, Vec3 *dir, int size, int a, int b);
extern float sqrtf(float x);

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

int func_1459B0(Obj *o, void *who)
{
    Info *info = o->info;
    char buf[0x20];
    Vec3 dir;
    float range;
    float len;
    float inv;
    float s;
    float sq;

    if (info->index != 0xFFFF) {
        ((Entry *)((char *)D_001DE778[info->row].entries + (info->index << 4)))->flags |= 8;
    }
    range = 100.0f;
    Sub3(&dir, &info->target->pos, &o->pos);
    sq = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
    if (sq < 2.3841858e-07f) {
        len = 0.0f;
    } else {
        s = sqrtf(sq);
        inv = 1.0f / s;
        dir.x = dir.x * inv;
        dir.y = dir.y * inv;
        dir.z = dir.z * inv;
        len = s;
    }
    if (func_01E238(len, &range, buf, who, &dir, 0x68, 0, 0) == 0) {
        return 1;
    }
    if (info->index != 0xFFFF) {
        ((Entry *)((char *)D_001DE778[info->row].entries + (info->index << 4)))->flags &= 0xFFF7;
    }
    return 0;
}
