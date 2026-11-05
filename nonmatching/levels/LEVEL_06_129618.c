/* LEVEL_06.REL:0x129618, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; first
 * difference at byte +2 is register allocation for two
 * flag masks. More direct C folds the masks to 28 bytes.
 * Reopen: recover the original mask/value lifetime or a
 * qualified compiler route preserving both operations.
 */
extern char *D_001F5C4C;

int func_129618(void)
{
    unsigned int flags = *(unsigned int *)(D_001F5C4C + 0x94);
    unsigned int left = (flags & 0x10000u) != 0;
    unsigned int right = flags & 0x20000u;
    return (left | right) != 0;
}
