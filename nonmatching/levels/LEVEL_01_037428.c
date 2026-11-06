/* LEVEL_01.REL:0x037428: Ghidra body 92 bytes.
 * Pinned pure C links 76 bytes and first differs at +24.
 * Recheck the 64-bit bit-test expression and symbolic comparison address. No matching credit.
 */
extern char D_00003008[];
extern void func_03BE20(void);
extern int func_0010C0(int);

int func_037428(char *record)
{
    func_03BE20();
    if ((*(unsigned long long *)(record + 0x968) & 8) != 0)
        return func_0010C0(0) == (int)D_00003008;
    return 0;
}
