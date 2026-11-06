/* LEVEL_08.REL:0x0BBEA8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0BBE98(void);
extern unsigned char D_00245018;
extern unsigned int D_00245014;

void func_0BBEA8(int first, unsigned char second)
{
    func_0BBE98();
    D_00245018 = first;
    D_00245014 = second;
}
