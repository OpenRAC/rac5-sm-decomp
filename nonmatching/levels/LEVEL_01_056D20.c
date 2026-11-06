/* LEVEL_01.REL:0x056D20: Ghidra body 68 bytes.
 * Pinned pure C links 68 bytes and first differs at +30.
 * Recheck the post-call field reload and state clear. No matching credit.
 */
extern void func_03BE20(void);
extern void func_087DE8(int);
extern void func_135EC0(void);

void func_056D20(char *record)
{
    func_03BE20();
    func_087DE8(2);
    if (*(int *)(record + 0xcf0) != 0) {
        func_135EC0();
        *(int *)(record + 0xcf0) = 0;
    }
}
