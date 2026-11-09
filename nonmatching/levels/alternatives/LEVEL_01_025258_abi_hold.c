/* LEVEL_01.REL:0x025258: reviewed 128-byte candidate, held for ABI review.
 * Validates an index and slot, stores the slot in a record and optionally
 * refreshes it.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *func_024628(unsigned int, long long);
extern void func_025098(unsigned int, long long);

int func_025258(unsigned int index, unsigned int slot,
                long long value, int refresh)
{
    char *record;
    if (index < 25 && slot < 8) {
        record = func_024628(index, value);
        *(int *)(record + 0x3c) = slot;
        if (refresh != 0) {
            func_025098(index, value);
        }
        return 1;
    }
    return 0;
}
