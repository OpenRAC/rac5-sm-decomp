/* LEVEL_01.REL:0x0BCBA0, bounded 60-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 56 bytes, first linked difference at body byte +0.
 * Reopen: Recover the owner-pointer lifetime and the two-stage count/output checks.
 * Not linked into the accepted gate or counted.
 */
int func_0BCBA0(char *owner, int *output)
{
    int count = *(int *)(owner + 0x20);
    if (count == 0)
        return 0;
    if (output == 0)
        return 0;
    count--;
    *(int *)(owner + 0x20) = count;
    *output = *(int *)(owner + count * 4);
    return 1;
}
