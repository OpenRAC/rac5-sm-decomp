/* LEVEL_19.REL:0x15D040: reviewed 124-byte candidate, held for ABI review.
 * Walks a linked list from a global head and returns the first node accepted
 * by a helper.
 * pinned C with gnu-ee-trial links 124/124 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_15D328 returning int with (pointer, pointer), but the
 * accepted LEVEL_19_15D328.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001BF01C;

int func_15D328(char *a, char *b);

char *func_15D040(char *a0, int a1)
{
    char *s0;

    for (s0 = D_001BF01C; s0 != 0; s0 = *(char **)(*(char **)(s0 + 0x58) + 0x24)) {
        if (*(int *)(*(char **)(s0 + 0x54) + 0x8) == a1) {
            if (func_15D328(s0, a0) != 0) {
                return s0;
            }
        }
    }
    return 0;
}
