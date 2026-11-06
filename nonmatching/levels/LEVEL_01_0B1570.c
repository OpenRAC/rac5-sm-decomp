/* LEVEL_01.REL:0x0B1570, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B1560(void);
extern unsigned char D_001FC158;
extern unsigned int D_001FC154;

void func_0B1570(int first, unsigned char second)
{
    func_0B1560();
    D_001FC158 = first;
    D_001FC154 = second;
}
