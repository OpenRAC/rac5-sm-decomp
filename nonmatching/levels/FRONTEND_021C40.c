/* FRONTEND.REL:0x021C40, bounded 52-byte candidate.
 * Isolated sdk991111 C object: 52 bytes; first linked difference
 * at body byte +10. Not linked into the accepted gate or counted.
 * Reopen: Recover the bounds-failure branch while retaining the indexed comparison and SDK compiler route.
 */
extern char D_001EC1E8[];

int func_021C40(unsigned int index)
{
    if (index < 8)
        return *(int *)(D_001EC1E8 + index * 0x824 + 0x818) == 7;
    return 0;
}
