/* LEVEL_06.REL:0x0ABD40, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0ABD30(void);
extern unsigned char D_001EB058;
extern unsigned int D_001EB054;

void func_0ABD40(int first, unsigned char second)
{
    func_0ABD30();
    D_001EB058 = first;
    D_001EB054 = second;
}
