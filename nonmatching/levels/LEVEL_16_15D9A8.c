/* LEVEL_16.REL:0x15D9A8: reviewed 68-byte candidate.
 * Claims the first free slot of the object's four-entry pool and returns it,
 * or null when all are in use.
 * sdk991111 C with gnu-ee-trial links 68/68 bytes; first differs at +8.
 * The retail loop keeps the pool base as its induction pointer, reads the slot
 * flag by displacement and stops at base+0x190; this profile folds the flag
 * displacement into the pointer, and the pinned and gnu-ee-trial profiles keep
 * a separate counter (60 bytes).
 * Retry: Find the loop form or element type that keeps the flag displacement
 * out of the induction variable.
 * No matching credit.
 */
typedef struct {
    char pad[0x60];
    unsigned char used;
    char pad61[3];
} Slot;

typedef struct {
    char pad[0x604];
    Slot slots[4];
} Pool;

typedef struct {
    char pad[0x58];
    Pool *pool;
} Obj;

Slot *func_15D9A8(Obj *obj)
{
    Pool *pool = obj->pool;
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (!pool->slots[i].used) {
            pool->slots[i].used = 1;
            return &pool->slots[i];
        }
    }
    return 0;
}
