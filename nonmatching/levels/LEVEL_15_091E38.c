/* LEVEL_15.REL:0x091E38, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_091E28(void);
extern unsigned char D_00150DD8;
extern unsigned int D_00150DD4;

void func_091E38(int first, unsigned char second)
{
    func_091E28();
    D_00150DD8 = first;
    D_00150DD4 = second;
}
