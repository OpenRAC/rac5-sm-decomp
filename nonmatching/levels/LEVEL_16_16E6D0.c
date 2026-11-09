/* LEVEL_16.REL:0x16E6D0: reviewed 620-byte candidate, held for ABI review.
 * Proximity-driven fade state machine for an object.
 * gnu-ee-trial C with gnu-ee-trial links 620/620 bytes and is byte-exact at
 * this and 3 other USA placements, but the prototypes disagree.
 * It declares func_021670 returning int with (pointer, pointer), but the
 * accepted LEVEL_16_021670.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef unsigned char u8;

typedef struct {
    char pad0[4];
    void *link;
    float level;
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
    char pad2[0x58 - 0x47];
    Info *info;
    char pad3[0x64 - 0x5C];
    int flags;
    unsigned word68;
} Obj;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad1[0xF8 - 0x3C];
    int ref;
} Target;

extern Holder *func_0220C8(void *, int);
extern int func_021670(Target *, void *);
extern int func_196D18(float);

int func_16E6D0(Obj *obj, Target *tgt)
{
    Info *info;
    Holder *h;
    float dx, dy, dz;
    float *a;
    float *b;
    float d2;
    float x;
    int near;
    int same;

    info = obj->info;
    a = obj->pos;
    b = tgt->pos;
    dx = b[0] - a[0];
    dy = b[1] - a[1];
    dz = b[2] - a[2];
    d2 = dx * dx + dy * dy + dz * dz;
    h = func_0220C8(info->link, tgt->ref);
    near = func_021670(tgt, info->link);
    same = h->key == h->nodes[h->index]->id;
    if (!near || !same) {
        if (d2 < 2.25f)
            return 1;
    }
    if (obj->state == 3) {
        obj->flags &= ~0x40;
        if (near && d2 < 2.25f) {
            obj->state = 0;
            obj->flags |= 0x40;
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
        obj->word68 = (func_196D18(info->level) << 24) | (obj->word68 & 0xFFFFFF);
    } else if (obj->state == 1) {
        info->level += 17.0f;
        if (255.0f < info->level) {
            info->level = 255.0f;
            obj->state = 3;
            obj->flags &= ~0x40;
        } else if (near && d2 < 2.25f) {
            obj->state = 0;
        }
        obj->word68 = (func_196D18(info->level) << 24) | (obj->word68 & 0xFFFFFF);
    }
    return 0;
}
