/* LEVEL_19.REL:0x13B398: reviewed 116-byte candidate, held for ABI review.
 * When a helper succeeds, stores three words in a sub-record and calls a
 * second helper.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_13B370 returning int with (pointer, pointer, pointer,
 * pointer), but the accepted LEVEL_07_15F8E8.c defines it returning int with
 * (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_13B370(void *a0, void *a1, void *a2, void *a3);
extern void func_13B508(char *a0, int a1);

int func_13B398(char *a0, void *a1, void *a2, void *a3)
{
    char *v;

    if (func_13B370(a0, a1, a2, a3)) {
        v = *(char **)(a0 + 0x58);
        *(void **)(v + 0x64) = a1;
        *(void **)(v + 0x68) = a2;
        *(void **)(v + 0x6C) = a3;
        func_13B508(a0, 1);
        return 1;
    }
    return 0;
}
