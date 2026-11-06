/* LEVEL_02.REL:0x0B7E80, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B7E70(void);
extern unsigned char D_00211118;
extern unsigned int D_00211114;

void func_0B7E80(int first, unsigned char second)
{
    func_0B7E70();
    D_00211118 = first;
    D_00211114 = second;
}
