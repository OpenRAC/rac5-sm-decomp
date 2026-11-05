/* FRONTEND.REL:0x020698, bounded 64-byte candidate.
 * Isolated pinned C object: 60 bytes; first linked difference
 * at body byte +8. Not linked into the accepted gate or counted.
 * Reopen: Recover the flag set/clear branch and the two pointer reload lifetimes.
 */
extern char *D_0032814;

int func_020698(unsigned int mask, int enable)
{
    unsigned int *flags;
    if (D_0032814 == 0)
        return 0;
    flags = (unsigned int *)(D_0032814 + 0x94);
    if (enable)
        *flags |= mask;
    else
        *flags &= ~mask;
    return 1;
}
