/* LEVEL_01.REL:0x074EB8: reviewed 76-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +32.
 * Retry: Recover the intermediate boolean transfer after the final nonzero test
 * without changing the observable pointer and flag checks.
 * No matching credit.
 */
int func_074EB8(char *object)
{
    char *context = *(char **)(object + 0x40);
    char *target = *(char **)(context + 0x10);
    int result;
    if ((*(unsigned int *)(target + 0x3c) & 2) != 0)
        return 0;
    result = 0;
    if (*(int *)(object + 0x48) != 0 &&
        (*(unsigned int *)(object + 0x64) & 0x4000) == 0)
        result = *(int *)(context + 0x20) != 0;
    return result;
}
