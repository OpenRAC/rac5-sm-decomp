/* LEVEL_22.REL:0x09FB80, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_09FB70(void);
extern unsigned char D_0015B4D8;
extern unsigned int D_0015B4D4;

void func_09FB80(int first, unsigned char second)
{
    func_09FB70();
    D_0015B4D8 = first;
    D_0015B4D4 = second;
}
