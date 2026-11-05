/* FRONTEND.REL:0x0209B0, bounded 48-byte candidate.
 * Isolated pinned C object: 44 bytes; first linked difference
 * at body byte +20. Not linked into the accepted gate or counted.
 * Reopen: Recover the conditional masked return without shortening away the retail conditional move.
 */
extern char *D_0032814;

unsigned int func_0209B0(void)
{
    unsigned int flags = *(unsigned int *)(D_0032814 + 0x94);
    if (flags & 0x20000u)
        return 0x20000u;
    return (flags & 0x10000u) ? 0x10000u : 0;
}
