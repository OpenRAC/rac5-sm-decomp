/* LEVEL_18:0x16FB78 -- placement copy of LEVEL_01_19B9C8.c: proximity-driven fade state machine for an object. */
typedef unsigned char u8;

typedef struct {
    char pad0[0x14];
    float level;
    u8 kind;
} Info;

typedef struct {
    char pad0[0x38];
    int id;
} Node;

typedef struct {
    char pad0[0x10];
    Node *nodes[0x0B];
    int index;
    int key;
} Holder;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad1[0x46 - 0x3C];
    u8 state;
    char pad2[0x54 - 0x47];
    Info *info;
    char pad3[0x64 - 0x58];
    int flags;
    unsigned word68;
} Obj;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad1[0xF8 - 0x3C];
    int ref;
} Target;

extern int func_021710(int, int);
extern int func_021ED8(int, int);
extern int func_1981B8(float);

int func_16FB78(Obj *obj, Target *tgt)
{
    Info *info;
    Holder *h;
    float dx, dy, dz;
    float *a;
    float *b;
    float d2;
    int near;

    near = 0;
    a = obj->pos;
    b = tgt->pos;
    dx = b[0] - a[0];
    dy = b[1] - a[1];
    dz = b[2] - a[2];
    info = obj->info;
    d2 = dx * dx + dy * dy + dz * dz;
    h = (Holder *)func_021710(info->kind, tgt->ref);
    if (h->key == h->nodes[h->index]->id || func_021ED8(info->kind, tgt->ref) == 0)
        near = 1;
    if (!near) {
        if (d2 < 36.0f)
            return 1;
    }
    if (obj->state == 3) {
        obj->flags &= ~0x08000000;
        if (near && d2 < 2.25f) {
            obj->state = 0;
            obj->flags |= 0x08000000;
        }
    } else if (obj->state == 2) {
        if (!near || 2.25f < d2)
            obj->state = 1;
    } else if (obj->state == 0) {
        info->level -= 17.0f;
        if (info->level < 96.0f) {
            info->level = 96.0f;
            obj->state = 2;
        } else if (!near || 2.25f < d2) {
            obj->state = 1;
        }
        obj->word68 = (func_1981B8(info->level) << 24) | (obj->word68 & 0xFFFFFF);
    } else if (obj->state == 1) {
        info->level += 17.0f;
        if (255.0f < info->level) {
            info->level = 255.0f;
            obj->state = 3;
            obj->flags &= ~0x08000000;
        } else if (near && d2 < 2.25f) {
            obj->state = 0;
        }
        obj->word68 = (func_1981B8(info->level) << 24) | (obj->word68 & 0xFFFFFF);
    }
    return 0;
}
