/* LEVEL_02.REL:0x029C88: reviewed 44-byte candidate.
 * pinned C with gnu-ee-trial links 40 bytes; first differs at +4.
 * Retry: Recover the intermediate boolean return lifetime that emits the additional
 * move; current C links 40 B versus the 44-byte body and all qualified cc1 routes
 * share the +4 branch difference.
 * No matching credit.
 */
int func_029C88(unsigned char *state)
{
    int result = 0;
    if (state[0x1a8] != 0 && state[0x164] != 0)
        result = state[0x120] != 0;
    return result;
}
