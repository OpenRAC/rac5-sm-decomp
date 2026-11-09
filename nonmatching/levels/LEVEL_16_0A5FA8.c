/* LEVEL_16.REL:0x0A5FA8: reviewed 112-byte candidate, held for ABI review.
 * Runs four per-slot helpers for each of two slots of an owner record.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_0A6230 returning void with (int, pointer), but the accepted
 * LEVEL_16_0A6230.c defines it returning void with (int, int).
 * It declares func_0A60F0 returning void with (int, pointer), but the accepted
 * LEVEL_16_0A60F0.c defines it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0A6358(unsigned int slot, char *owner);
extern void func_0A6230(unsigned int slot, char *owner);
extern void func_0A60F0(unsigned int slot, char *owner);
extern void func_0A80D8(unsigned int slot, char *owner);

void func_0A5FA8(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A6358(i, owner);
        func_0A6230(i, owner);
        func_0A60F0(i, owner);
        func_0A80D8(i, owner);
    }
}
