/* LEVEL_04.REL:0x1D5B78: reviewed 64-byte candidate, held for ABI review.
 * Sends a fixed message when the record's sub-object has a nonzero flag.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_0BB138 returning void with (pointer, pointer, int, int,
 * int), but the accepted LEVEL_04_0BB138.c defines it returning void with
 * (long long, long long, long long, int, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001D75F0[];
extern void func_0BB138(void *, void *, unsigned int, int, int);

void func_1D5B78(char *record)
{
    char *sub = *(char **)(record + 0x58);

    if (*(int *)(sub + 0x40) != 0)
        func_0BB138(D_001D75F0, record, 0xFFFFFFFFu, 3, 0x1d5);
}
