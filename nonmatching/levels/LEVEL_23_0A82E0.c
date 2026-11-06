/* LEVEL_23.REL:0x0A82E0, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0A82D0(void);
extern unsigned char D_001CF558;
extern unsigned int D_001CF554;

void func_0A82E0(int first, unsigned char second)
{
    func_0A82D0();
    D_001CF558 = first;
    D_001CF554 = second;
}
