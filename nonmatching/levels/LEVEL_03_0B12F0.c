/* LEVEL_03.REL:0x0B12F0, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B12E0(void);
extern unsigned char D_002147D8;
extern unsigned int D_002147D4;

void func_0B12F0(int first, unsigned char second)
{
    func_0B12E0();
    D_002147D8 = first;
    D_002147D4 = second;
}
