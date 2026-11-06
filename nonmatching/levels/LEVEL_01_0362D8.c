/* LEVEL_01.REL:0x0362D8: Ghidra body 68 bytes.
 * Pinned pure C links 60 bytes and first differs at +4.
 * Recheck forwarded stack arguments and common data-base addressing. No matching credit.
 */
extern char D_00234BC0[];
extern void func_02E488(void *, void *, int, int, int, int, int, int);

void func_0362D8(void)
{
    func_02E488(D_00234BC0, D_00234BC0 + 0x2c,
                0x200, 2, 4, 8, 2, 1);
}
