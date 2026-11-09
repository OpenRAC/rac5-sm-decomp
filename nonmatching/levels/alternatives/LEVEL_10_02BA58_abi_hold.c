/* LEVEL_10.REL:0x02BA58: reviewed 72-byte candidate, held for ABI review.
 * Sets or clears bit 0 of the looked-up object's flag byte.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_084C50 returning pointer with (int), but the accepted
 * LEVEL_10_084C50.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x45];
    unsigned char flags;
} Obj;

extern Obj *func_084C50(int id);

void func_02BA58(int id, int enable)
{
    Obj *obj = func_084C50(id);

    if (obj != 0) {
        if (enable)
            obj->flags |= 1;
        else
            obj->flags &= ~1;
    }
}
