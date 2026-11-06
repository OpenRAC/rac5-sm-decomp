/* LEVEL_01.REL:0x0CB290: Ghidra body 88 bytes.
 * Pinned pure C links 88 bytes and first differs at +10.
 * Recheck display-list index and global store scheduling. No matching credit.
 */
extern char D_00201544[];
extern int D_00201264;
extern void func_0B6020(int);
extern int func_01A898(void);
extern void func_087DE8(int);

void func_0CB290(void)
{
    *(int *)(D_00201544 + D_00201264 * 0x6c) = 4;
    func_0B6020(7);
    if (func_01A898() != 0) {
        func_087DE8(2);
    }
}
