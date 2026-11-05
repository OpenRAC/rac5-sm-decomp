/* FRONTEND.REL:0x020968, bounded 28-byte candidate.
 * Isolated pinned C object: 24 bytes; first linked difference
 * at body byte +4. Not linked into the accepted gate or counted.
 * Reopen: Find a source form that preserves the explicit high-bit mask instead of reducing it to a shift.
 */
extern char D_0032814[];

int func_020968(void)
{
    char *p = *(char **)D_0032814;
    return (*(int *)(p + 0x94) & 0x40000) != 0;
}
