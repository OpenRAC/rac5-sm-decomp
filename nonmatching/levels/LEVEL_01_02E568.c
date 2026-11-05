/* LEVEL_01.REL:0x02E568, bounded 48-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 48 bytes, first linked difference at body byte +6.
 * Reopen: Recover the three field-load lifetimes and subtraction register assignment.
 * Not linked into the accepted gate or counted.
 */
void func_02E568(char *object)
{
    int delta = *(int *)(object + 0x24);
    int remaining = *(int *)(object + 0x14) - delta;
    if (remaining < 1)
        remaining = 0;
    *(int *)(object + 0x14) = remaining;
    *(unsigned int *)(object + 0x10) =
        (*(unsigned int *)(object + 0x10) + delta) & *(unsigned int *)(object + 8);
}
