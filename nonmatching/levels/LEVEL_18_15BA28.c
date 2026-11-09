/* LEVEL_18.REL:0x15BA28: reviewed 136-byte candidate, held for ABI review.
 * Tries the record's primary check, then falls back to a secondary helper.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_036BE8 returning int with (pointer, pointer), but the
 * accepted LEVEL_01_03C360.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_036BE8(void *a0, void *a1);
extern void func_15B878(void *a0, void *a1);
extern int func_159C10(void *a0);

int func_15BA28(char *a0, void *a1)
{
    char *s1 = *(char **)(a0 + 0x58);
    int r;

    if (*(int *)(*(char **)s1 + 0xF4) == 0 || func_036BE8(*(char **)s1, a1)) {
        func_15B878(a0, *(char **)s1);
        return 1;
    }
    r = func_159C10(a0);
    if (r != 0) {
        return 0;
    }
    func_15B878(a0, *(char **)s1);
    s1[0x18C] = 1;
    return 1;
}
