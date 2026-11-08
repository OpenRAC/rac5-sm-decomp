/* LEVEL_01.REL:0x025098: Defined C links 96/80 bytes; first differs at +48.
 * Retry: Prove the non-null result domain of both local callees at all 19 direct
 * retail calls, including the table-selected LEVEL_06 paths; then replay the held
 * exact C at all 15 sites, review ABI and run the combined 21-module gate. Until that
 * proof, the guarded defined C remains nonmatching without C credit.
 * No C matching credit.
 */
extern int func_024628(int first, int second);
extern char *func_024670(unsigned int first, int second);

void func_025098(int first, int second)
{
    int destination = func_024628(first, second);
    char *source = func_024670(first, second);
    if (destination != 0 && source != 0)
        *(int *)(destination + 0x40) = *(int *)(source + 0x38);
}
