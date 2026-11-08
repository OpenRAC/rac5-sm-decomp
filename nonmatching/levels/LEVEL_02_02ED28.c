/* LEVEL_02.REL:0x02ED28: reviewed 48-byte candidate.
 * pinned C with gnu-ee-trial links 48 bytes; first differs at +6.
 * Retry: Recover the v0/v1 register allocation of the two live counters; three source
 * forms and all qualified cc1 routes retain the same permutation.
 * No matching credit.
 */
void func_02ED28(char *state)
{
    int change = *(int *)(state + 0x24);
    int remaining = *(int *)(state + 0x14) - change;
    int updated = *(int *)(state + 0x10) + change;
    unsigned int mask = *(unsigned int *)(state + 8);
    if (remaining < 1)
        remaining = 0;
    *(int *)(state + 0x14) = remaining;
    *(int *)(state + 0x10) = updated & mask;
}
