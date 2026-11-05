/* FRONTEND.REL:0x0275D0, bounded 52-byte candidate.
 * Isolated pinned C object: 52 bytes; first linked difference
 * at body byte +2. Not linked into the accepted gate or counted.
 * Reopen: Recover the lazy-initialization pointer test and its address/register lifetimes without an artificial null check.
 */
extern int D_00106258;
extern int D_0010625C;
extern char D_0010A250[];
extern char D_0010A318[];

int *func_0275D0(void)
{
    if (D_00106258 == 0) {
        D_0010625C = (int)D_0010A318;
        D_00106258 = (int)D_0010A250;
    }
    return &D_00106258;
}
