/* LEVEL_07.REL:0x0B3570, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The two global stores use reversed address registers. Reopen with original global declaration and argument-lifetime evidence.
 */
extern void func_0B3560(void);
extern unsigned char D_00210458;
extern unsigned int D_00210454;

void func_0B3570(int first, unsigned char second)
{
    func_0B3560();
    D_00210458 = first;
    D_00210454 = second;
}
