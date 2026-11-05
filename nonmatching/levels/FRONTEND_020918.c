/* FRONTEND.REL:0x020918, bounded 44-byte candidate.
 * Isolated pinned C object: 40 bytes; first linked difference
 * at body byte +2. Not linked into the accepted gate or counted.
 * Reopen: Recover the mask-expression order and the retail literal/register lifetimes.
 */
extern char *D_0032814;

int func_020918(void)
{
    unsigned int flags = *(unsigned int *)(D_0032814 + 0x94);
    unsigned int first = (flags & 0x10000u) != 0;
    unsigned int second = flags & 0x20000u;
    return (first | second) != 0;
}
