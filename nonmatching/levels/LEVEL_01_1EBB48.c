/* USA LEVEL_01:1EBB48, 136-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 140 bytes: 25 differing words; first difference +0xC. No matching credit.
 * Remaining issue: table typed (base, slot[80] long long at +0x18, kind[80] at +0x29C), kind
 * pointer local, while loop and abort-on-not-1 before the return: block order, abort tail and
 * loop body now match retail; remaining: retail exits the loop through beql (sll in the likely
 * slot) and reuses the loop's kind address, ours takes beq and recomputes it (140 vs 136 B), and
 * kinds sit in a3 instead of t0 (records a0/const t0 vs a3/a0); 10 loop/pointer forms, 4
 * profiles, 9 flags
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x1EBB48 -- follows the chain of forwarded slots (kind 2) to the final slot and returns its offset resolved against the base; any other kind but 1 aborts. */
typedef struct Table {
    int base;
    char pad04[0x14];
    long long slot[80];
    int w298;
    char kind[80];
} Table;

extern int runtime_abort(void) __asm__("abort");

int func_1EBB48(int index, Table *t)
{
    char *kind = t->kind;

    while (kind[index] == 2)
        index = (int)t->slot[index];
    if (kind[index] != 1)
        return runtime_abort();
    return t->base + (int)t->slot[index];
}
