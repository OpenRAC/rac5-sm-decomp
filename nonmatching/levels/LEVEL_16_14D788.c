/* LEVEL_16.REL:0x14D788: reviewed 68-byte candidate.
 * Claims the first free slot of the owner's four-slot pool and returns it, or
 * returns null when all four are taken.
 * sdk991111 C with gnu-ee-trial links 68/68 bytes; first differs at +8.
 * Same loop-induction form as LEVEL_16:0x15D9A8 with a 0x2D0 flag
 * displacement; this profile folds the displacement into the pointer, and the
 * pinned and gnu-ee-trial profiles keep a separate counter (60 bytes).
 * Retry: As for LEVEL_16:0x15D9A8.
 * No matching credit.
 */
typedef struct {
    char pad[0x60];
    unsigned char used;
    char pad61[3];
} Slot;

typedef struct {
    char pad[0x270];
    Slot slots[4];
} Pool;

typedef struct {
    char pad[0x58];
    Pool *pool;
} Obj;

Slot *func_14D788(Obj *obj)
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
