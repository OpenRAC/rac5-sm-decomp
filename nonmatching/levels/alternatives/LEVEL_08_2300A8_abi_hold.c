/* LEVEL_08.REL:0x2300A8: reviewed 64-byte candidate, held for ABI review.
 * Runs a helper on two consecutive 0x18-byte records.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_22F5E0 returning void with (pointer), but the accepted
 * LEVEL_08_073C48.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_22F5E0(char *);

void func_2300A8(char *record)
{
    char *end = record + 0x30;
    do {
        func_22F5E0(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
