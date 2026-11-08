/* LEVEL_02.REL:0x025468: reviewed 148-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +64.
 * Retry: Branch-delay scheduling and comparison-result move need a source or
 * qualified compiler explanation.
 * No matching credit.
 */
/* LEVEL_02.REL:0x025468: useful C candidate, no matching credit.
   Reopen when: Branch-delay scheduling and comparison-result move need a source or qualified compiler explanation. */
extern int func_024F88(int owner, int kind);
extern int func_025398(int value);

int func_025468(int owner, int value, int index, int kind)
{
    int result = 0;
    int *first = (int *)(func_024F88(owner, kind) + 0x30);
    if (first[index] != 0) {
        int *second = (int *)(func_024F88(owner, kind) + 0x30);
        result = second[index] == func_025398(value);
    }
    return result;
}
