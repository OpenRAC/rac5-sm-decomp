/* LEVEL_01.REL:0x04BC60: reviewed 96-byte candidate, held for ABI review.
 * Calls one helper on a global block; otherwise runs a stored callback.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_06AB80 returning pointer with (pointer), but the accepted
 * LEVEL_01_06AB80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec_04BC60 {
    char pad[0x0c];
    void (*callback)(void *);
};
struct Blk_00235140 {
    char pad[0xdd4];
    struct Rec_04BC60 *record;
};
extern struct Blk_00235140 D_00235140;
extern void *func_06AB80(void *);
extern void func_06ABB8(void *);

void func_04BC60(void)
{
    struct Blk_00235140 *blk = &D_00235140;

    if (func_06AB80(blk) != 0) {
        func_06ABB8(blk);
    } else if (blk->record != 0) {
        if (blk->record->callback != 0)
            blk->record->callback(blk);
    }
}
