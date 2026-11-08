/* LEVEL_01.REL:0x1EBB48: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +14.
 * Retry: Recover status/record pointer lifetimes and the branch-likely loop; retain
 * the named abort import and returning epilogue.
 * No matching credit.
 */
extern int runtime_abort(void) __asm__("abort");

int func_1EBB48(int index, char *state)
{
    char *kinds = state + 0x29c;
    long long *records = (long long *)(state + 0x18);

    while (kinds[index] == 2)
        index = (int)records[index];
    if (kinds[index] == 1)
        return *(int *)state + (int)records[index];
    return runtime_abort();
}
