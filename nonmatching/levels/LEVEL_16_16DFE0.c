/* LEVEL_16.REL:0x16DFE0: reviewed 248-byte candidate, held for ABI review.
 * Tests whether a nearby object has any unresolved link slot.
 * pinned C with gnu-ee-trial links 248/248 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_021670 returning int with (pointer, int), but the accepted
 * LEVEL_16_021670.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0xB8];
    int ready;
    int owner;
} Obj;

typedef struct Slot {
    char pad0[0x3C];
    int state;
} Slot;

extern int func_0383A8(Obj *o);
extern int func_021670(Obj *o, int i);
extern Slot *func_0220C8(int i, int owner);

int func_16DFE0(Obj *a, Obj *b)
{
    float *pa;
    float *pb;
    float dx, dy, dz;
    unsigned int i;

    if (b->ready == 0) {
        return 0;
    }
    if (func_0383A8(b) != 0) {
        return 0;
    }
    pa = a->pos;
    pb = b->pos;
    dx = b->pos[0] - a->pos[0];
    dy = pb[1] - pa[1];
    dz = pb[2] - pa[2];
    if (dx * dx + dy * dy + dz * dz >= 9.0f) {
        return 0;
    }
    for (i = 1; i < 16; i++) {
        if (func_021670(b, i) != 0) {
            if (func_0220C8(i, b->owner)->state != 2) {
                return 1;
            }
        }
    }
    return 0;
}
