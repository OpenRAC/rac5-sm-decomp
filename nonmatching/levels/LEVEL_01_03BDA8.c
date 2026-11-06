/* LEVEL_01.REL:0x03BDA8: Ghidra body 80 bytes.
 * Pinned pure C links 80 bytes and first differs at +8.
 * Recheck prologue save order before the 64-bit state update. No matching credit.
 */
extern void func_03BE20(void);
extern void func_0033A8(int);

void func_03BDA8(char *record, long long mode)
{
    func_03BE20();
    *(unsigned long long *)(record + 0x960) |= 0x1000000000ULL;
    if (mode != 0) {
        func_0033A8(0);
    }
}
