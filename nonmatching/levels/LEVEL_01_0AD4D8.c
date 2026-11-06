/* LEVEL_01.REL:0x0AD4D8: Ghidra body 68 bytes.
 * Pinned pure C links 76 bytes and first differs at +33.
 * Recheck the full call ABI and table index before forwarding arguments. No matching credit.
 */
extern void *D_001FB9D0[];
extern void func_0AD1F8(void *, short, short, short, short);

void func_0AD4D8(int index, short first, short second,
                 short third, short fourth)
{
    func_0AD1F8(D_001FB9D0[index], first, second, third, fourth);
}
