/* LEVEL_02.REL:0x1392F8, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; first
 * difference at byte +2 is register allocation for two
 * flag masks. More direct C folds the masks to 28 bytes.
 * Reopen: recover the original mask/value lifetime or a
 * qualified compiler route preserving both operations.
 */
extern char *D_0021C00C;

int func_1392F8(void)
{
    unsigned int flags = *(unsigned int *)(D_0021C00C + 0x94);
    unsigned int left = (flags & 0x10000u) != 0;
    unsigned int right = flags & 0x20000u;
    return (left | right) != 0;
}
