/* FRONTEND.REL:0x026878, bounded 64-byte candidate.
 * Isolated pinned C object: 48 bytes; first linked difference
 * at body byte +0. Not linked into the accepted gate or counted.
 * Reopen: Recover the saved-register frame and comparison-result lifetime around the imported strcmp call.
 */
int strcmp(const char *, const char *);

int func_026878(const char **a, const char **b)
{
    if (a == b)
        return 1;
    if (strcmp(*a, *b) == 0)
        return 1;
    return 0;
}
