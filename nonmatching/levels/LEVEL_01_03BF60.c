/* LEVEL_01.REL:0x03BF60, bounded 48-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 48 bytes, first linked difference at body byte +2.
 * Reopen: Recover the child-pointer and flag temporary registers while keeping the short signed clear mask.
 * Not linked into the accepted gate or counted.
 */
void func_03BF60(char *object, int enabled)
{
    char *child = *(char **)(object + 0x5AC);
    if (child != 0) {
        int flags = *(int *)(child + 0x64);
        flags = (flags & -33) | (((enabled ^ 1) & 1) << 5);
        *(int *)(child + 0x64) = flags;
    }
}
