/* LEVEL_04.REL:0x0B67C0, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B67B0(void);
extern unsigned char D_00215618;
extern unsigned int D_00215614;

void func_0B67C0(int first, unsigned char second)
{
    func_0B67B0();
    D_00215618 = first;
    D_00215614 = second;
}
