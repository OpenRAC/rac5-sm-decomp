/* LEVEL_01.REL:0x027620: Ghidra body 92 bytes.
 * Pinned pure C links 88 bytes and first differs at +16.
 * Recheck the helper argument lifetime and early-return branch layout. No matching credit.
 */
extern unsigned char *D_001F3FAC;
extern int func_0275A0(int);

int func_027620(unsigned int index)
{
    if (index >= 100)
        return 0;
    if (func_0275A0((int)index) == 0)
        return 0;
    D_001F3FAC[0x1b60 + (int)index] |= 1;
    return 1;
}
