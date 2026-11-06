/* LEVEL_05.REL:0x0AFB30, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0AFB20(void);
extern unsigned char D_001EB4D8;
extern unsigned int D_001EB4D4;

void func_0AFB30(int first, unsigned char second)
{
    func_0AFB20();
    D_001EB4D8 = first;
    D_001EB4D4 = second;
}
