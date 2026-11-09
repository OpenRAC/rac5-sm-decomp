/* LEVEL_01.REL:0x19C6E0: reviewed 84-byte candidate, held for ABI review.
 * Calls a test helper and, when it passes, a follow-up helper.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_01_19B598.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00235140[];
extern int func_19B9C8(void *, void *);
extern void func_19BFF0(void *, void *);

int func_19C6E0(void *record)
{
    if (func_19B9C8(record, D_00235140) != 0) {
        func_19BFF0(record, D_00235140);
        return 1;
    }
    return 0;
}
