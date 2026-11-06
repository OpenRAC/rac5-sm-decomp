/* LEVEL_01.REL:0x0A69B8: Ghidra body 84 bytes.
 * Pinned pure C links 80 bytes and first differs at +16.
 * Recheck the three global-byte predicate branches. No matching credit.
 */
extern int func_0A69A8(void);
extern unsigned char D_001F68DC;
extern unsigned char D_001F68EA;
extern unsigned char D_001F68EB;

int func_0A69B8(void)
{
    if (func_0A69A8() != 0) {
        return 0;
    }
    return D_001F68DC != 0 && D_001F68EA != 0 && D_001F68EB == 0;
}
