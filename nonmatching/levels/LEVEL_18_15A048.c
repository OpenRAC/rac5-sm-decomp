/* LEVEL_18.REL:0x15A048: reviewed 88-byte candidate.
 * Compares a record word with a byte field, checks two sub-record fields, then
 * returns a predicate helper result as 0 or 1.
 * pinned C with gnu-ee-trial links 88/88 bytes; first differs at +48 (3
 * words).
 * The final flag test becomes a likely branch with a set-on-less-than result,
 * where the retail keeps a plain branch and an increment in its delay slot.
 * Retry: Recover the boolean result form of the final test.
 * No matching credit.
 */
extern int func_159C10(char *a0);

int func_15A048(char *a0, char *a1)
{
    char *p;
    char *q;

    p = *(char **)(a0 + 0x54);
    q = *(char **)(a0 + 0x58);
    if (*(int *)(a1 + 0xFC) != *(unsigned char *)(p + 0x18)) {
        return 0;
    }
    if (*(unsigned char *)(q + 0x18A) == 0) {
        return 0;
    }
    if (*(int *)q != 0) {
        return 0;
    }
    if (func_159C10(a0)) {
        return 1;
    }
    return 0;
}
