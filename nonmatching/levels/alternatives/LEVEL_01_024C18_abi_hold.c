/* LEVEL_01.REL:0x024C18: reviewed 128-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_025578.c.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *func_024628(unsigned int owner, int selector);
extern void *func_024A38(unsigned int index);

unsigned int func_024C18(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_024628(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_024A38(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
