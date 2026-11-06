/* LEVEL_24.REL:0x0AADE8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0AADD8(void);
extern unsigned char D_001CCDD8;
extern unsigned int D_001CCDD4;

void func_0AADE8(int first, unsigned char second)
{
    func_0AADD8();
    D_001CCDD8 = first;
    D_001CCDD4 = second;
}
