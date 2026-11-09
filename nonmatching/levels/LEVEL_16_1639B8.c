/* LEVEL_16.REL:0x1639B8: reviewed 140-byte candidate, held for ABI review.
 * Returns the first entry of a pointer list that accepts a callback.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning pointer with (pointer, pointer), but the
 * accepted caller LEVEL_16_1638F0.c declares it returning int with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0763F8(void *a0, void *a1);

void *func_1639B8(char *a0, void *a1)
{
    char *s3;
    char **list;
    unsigned int i;
    char *s0;

    s3 = *(char **)(a0 + 0x58);
    list = *(char ***)(a0 + 0x54);
    for (i = 0; i < *(unsigned int *)(s3 + 4); i++) {
        s0 = list[i];
        if (s0 != 0) {
            if (func_0763F8(s0, a1) != 0) {
                return s0;
            }
        }
    }
    return 0;
}
