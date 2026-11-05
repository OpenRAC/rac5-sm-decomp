/* FRONTEND.REL:0x005618, bounded 56-byte candidate.
 * Isolated sdk991111 C object: 56 bytes; first linked difference
 * at body byte +22. Not linked into the accepted gate or counted.
 * Reopen: Recover the branch-dependent global-pointer load and selected field offset.
 */
extern char *D_0002AD1C;
int func_005748(void);

char *func_005618(void)
{
    if (func_005748())
        return D_0002AD1C + 0x1D0;
    return D_0002AD1C + 0x1E0;
}
