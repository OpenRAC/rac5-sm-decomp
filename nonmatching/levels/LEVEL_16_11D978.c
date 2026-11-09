/* LEVEL_16.REL:0x11D978: reviewed 204-byte candidate, held for ABI review.
 * Sets a slot's two floats and picks its state.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_112E38 returning int with (int), but the accepted
 * LEVEL_16_112E38.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x10];
    int state;
    int pad14;
    float a;
    float b;
    char pad20[8];
} Slot;

extern Slot D_001B8BE0[][8];
extern Slot D_001B85A0[][8];
extern int D_002E1470;
extern int func_112E38(int idx);

void func_11D978(int idx, float a, float b)
{
    Slot *s;

    if (func_112E38(idx)) {
        s = &D_001B8BE0[D_002E1470][idx];
    } else {
        s = &D_001B85A0[D_002E1470][idx];
    }
    s->a = a;
    s->b = b;
    if (s->state != 4) {
        if (a <= 0.0f) {
            s->state = 3;
        } else if (b <= a) {
            s->state = 1;
        } else {
            s->state = 2;
        }
    }
}
