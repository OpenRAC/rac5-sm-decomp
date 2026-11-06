/* LEVEL_01.REL:0x0A86F8: Ghidra body 80 bytes.
 * Pinned pure C links 76 bytes and first differs at +4.
 * Recheck signed half-difference lowering and call argument timing. No matching credit.
 */
extern int func_0A86E0(void);
extern void func_0A8860(long long, int, int);

void func_0A86F8(long long state, int target)
{
    int delta = (func_0A86E0() - target) / 2;
    func_0A8860(state, delta, 0);
}
