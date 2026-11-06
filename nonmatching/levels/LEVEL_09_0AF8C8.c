/* LEVEL_09.REL:0x0AF8C8, bounded 52-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +4.
 * The pinned compiler omits the retail complement of the signed bound test and shortens the branch and two data-address paths. The best C links 48 bytes; five other qualified compiler routes also miss. Reopen with evidence for the original bound-value lifetime or a qualified route preserving it.
 */
extern char D_0030F108[];

void func_0AF8C8(int index)
{
    if (!(index < 4))
        return;
    *(int *)(D_0030F108 + index * 20) = 0;
    *(int *)(D_0030F108 + index * 20 + 4) = 0;
}