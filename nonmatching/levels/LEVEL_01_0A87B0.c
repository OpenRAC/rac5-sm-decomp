/* LEVEL_01.REL:0x0A87B0: Ghidra body 76 bytes.
 * Pinned pure C links 76 bytes and first differs at +4.
 * Recheck saved-register assignment around the callee result. No matching credit.
 */
extern int func_0A8680(void);

void func_0A87B0(int *record, int target)
{
    int difference = target - func_0A8680();
    record[2] += difference;
    record[0] += difference;
}
