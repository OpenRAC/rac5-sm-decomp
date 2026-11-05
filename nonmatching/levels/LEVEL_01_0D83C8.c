/* LEVEL_01.REL:0x0D83C8, bounded 48-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 48 bytes, first linked difference at body byte +12.
 * Reopen: Recover the unsigned-range and zero-sentinel branch layout without reordering the half-width subtraction.
 * Not linked into the accepted gate or counted.
 */
int func_0D83C8(unsigned int a, unsigned int b)
{
    if (b <= a)
        return 0;
    if (b != 0)
        return ((unsigned int)b >> 1) - ((unsigned int)a >> 1);
    return -1;
}
