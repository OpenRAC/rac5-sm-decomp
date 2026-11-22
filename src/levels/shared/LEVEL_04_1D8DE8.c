/* LEVEL_04:0x1D8DE8 -- picks the nearest object in the context's list that lies in front of this one and is not flagged, within the current best range. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Flags {
    char pad00[0x40];
    unsigned int flags_40;
} Flags;

typedef struct Cls {
    char pad00[0x10];
    Flags *f_10;
} Cls;

typedef struct Obj {
    char pad00[0x20];
    Vec3 dir_20;
    float pad2C;
    Vec3 pos_30;
    char pad3C[4];
    Cls *cls_40;
} Obj;

typedef struct Slot {
    Obj *o;
    int pad;
} Slot;

typedef struct Ctx {
    Slot slots[1];
    char pad08[0x3C];
    unsigned char n_44;
} Ctx;

typedef struct Holder {
    char pad00[0x58];
    Ctx *ctx_58;
} Holder;

extern float sqrtf(float x);

Obj *func_1D8DE8(Obj *self, Holder *h)
{
    float best;
    Obj *found;
    unsigned int i;
    unsigned int n;
    Obj *c;
    struct {
        float x;
        float z;
    } d;
    float d2;
    float len;
    Vec3 *pos;
    Vec3 *dir;

    pos = &self->pos_30;
    dir = &self->dir_20;
    best = 10000.0f;
    n = h->ctx_58->n_44;
    found = 0;
    for (i = 0; i < n; i++) {
        c = h->ctx_58->slots[i].o;
        if (c == self) {
            continue;
        }
        if (c->cls_40->f_10->flags_40 & 4) {
            continue;
        }
        d.x = c->pos_30.x - pos->x;
        d.z = c->pos_30.z - pos->z;
        d2 = d.x * d.x + d.z * d.z;
        if (d2 <= best * best) {
            len = sqrtf(d2);
            if (0.9f <= (d.x * dir->x + d.z * dir->z) / len) {
                best = len;
                found = c;
            }
        }
    }
    return found;
}
