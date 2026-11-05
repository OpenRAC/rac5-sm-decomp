/* FRONTEND.REL:0x021A00, bounded 44-byte candidate.
 * Isolated pinned C object: 44 bytes; first linked difference
 * at body byte +8. Not linked into the accepted gate or counted.
 * Reopen: Recover the bounds-failure branch and stride-calculation lifetime.
 */
extern char D_001EC1E8[];
int func_021A00(unsigned int index)
{
    int result = 8;
    if (index < 8)
        result = *(int *)(D_001EC1E8 + index * 0x824 + 0x818);
    return result;
}
