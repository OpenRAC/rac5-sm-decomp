/* FRONTEND.REL:0x01E380: reviewed 60-byte candidate, held for ABI review.
 * Looks up a 12-byte record by low byte and checks its tag word.
 * pinned C with gnu-ee-trial links 60/60 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (int), but the accepted
 * caller FRONTEND_01E5C0.c declares it returning pointer with no arguments.
 * It defines the function returning pointer with (int), but the accepted
 * caller FRONTEND_01E570.c declares it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00032608[];
int *func_01E380(unsigned int value)
{
    int index = value & 0xFF;
    int *record;
    if (index < 16) {
        record = D_00032608 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
