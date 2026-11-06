/* LEVEL_24.REL:0x0ABE90, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +4.
 * The pinned compiler omits the retail complement of the signed bound test and shortens the branch and two data-address paths. The best C links 48 bytes; five other qualified compiler routes also miss. Reopen with evidence for the original bound-value lifetime or a qualified route preserving it.
 */
extern char D_002F3848[];

void func_0ABE90(int index)
{
    if (!(index < 4))
        return;
    *(int *)(D_002F3848 + index * 20) = 0;
    *(int *)(D_002F3848 + index * 20 + 4) = 0;
}