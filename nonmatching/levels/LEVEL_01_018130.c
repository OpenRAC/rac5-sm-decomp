/* LEVEL_01.REL:0x018130: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +6.
 * Recheck global table address construction and callee result width. No matching credit.
 */
extern int func_028290(void);
extern int D_0021A7F0;
extern int D_0020BE40[];

int func_018130(void)
{
    int value = func_028290();
    return D_0020BE40[value + D_0021A7F0 * 2];
}
