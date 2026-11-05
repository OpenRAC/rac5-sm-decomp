/* FRONTEND.REL:0x021188, bounded 40-byte candidate.
 * Isolated pinned C object: 40 bytes; first linked difference
 * at body byte +28. Not linked into the accepted gate or counted.
 * Reopen: Recover the null-check and sign-test branch layout without the branch-likely shortening.
 */
extern char D_0032814[];
int func_021188(void)
{
    char *p = *(char **)D_0032814;
    if (p == 0)
        return 0;
    return -1 < *(int *)(p + 0xDC);
}
