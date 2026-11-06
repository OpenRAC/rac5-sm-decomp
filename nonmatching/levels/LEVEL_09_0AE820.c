/* LEVEL_09.REL:0x0AE820, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0AE810(void);
extern unsigned char D_001E5F58;
extern unsigned int D_001E5F54;

void func_0AE820(int first, unsigned char second)
{
    func_0AE810();
    D_001E5F58 = first;
    D_001E5F54 = second;
}
