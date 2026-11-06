/* LEVEL_10.REL:0x0B2688, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B2678(void);
extern unsigned char D_00205158;
extern unsigned int D_00205154;

void func_0B2688(int first, unsigned char second)
{
    func_0B2678();
    D_00205158 = first;
    D_00205154 = second;
}
