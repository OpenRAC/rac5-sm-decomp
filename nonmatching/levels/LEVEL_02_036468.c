/* LEVEL_02.REL:0x036468: reviewed 80-byte candidate, held for ABI review.
 * Checks two linked records and either sets or clears a flag byte.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_02_161BA8.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_036468(char *a0)
{
    char *s;
    char *p;
    char *q;
    unsigned char k;

    s = *(char **)(a0 + 0x58);
    p = *(char **)(s + 4);
    k = *(unsigned char *)(p + 0x45);
    if (k == 5) {
        q = *(char **)(s + 8);
        if (*(unsigned char *)(q + 0x45) == k) {
            *(unsigned char *)(s + 0xAC) = 1;
            return 1;
        }
    }
    if (*(unsigned char *)(s + 0xAC) != 0) {
        *(unsigned char *)(s + 0xAC) = 0;
        return 1;
    }
    return 0;
}
