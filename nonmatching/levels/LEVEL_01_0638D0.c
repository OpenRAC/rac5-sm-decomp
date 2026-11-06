/* LEVEL_01.REL:0x0638D0: Ghidra body 124 bytes.
 * Pinned pure C links 124 bytes and first differs at +23.
 * Recheck state-test branch and final call scheduling. No matching credit.
 */
extern int D_00239178;
extern void func_06AB98(void *);
extern void func_063C18(void *);

void func_0638D0(char *record)
{
    int state = *(short *)(record + 0x108);
    if (state == 2 || state == 4 || state == 3 || state == 11) {
        D_00239178 = 8;
    } else if (state == 12) {
        func_06AB98(record);
    } else {
        D_00239178 = 7;
    }
    func_063C18(record);
}
