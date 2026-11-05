/* LEVEL_01.REL:0x037238, bounded 52-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 56 bytes, first linked difference at body byte +2.
 * Reopen: Recover the insertion-loop entry and value truncation before the first comparison.
 * Not linked into the accepted gate or counted.
 */
void func_037238(unsigned short *place, unsigned short value)
{
    unsigned short previous = place[-1];
    while (value < previous) {
        *place = previous;
        --place;
        previous = place[-1];
    }
    *place = value;
}
