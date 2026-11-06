/* LEVEL_01.REL:0x015D88: Ghidra body 80 bytes.
 * Pinned pure C links 80 bytes and first differs at +25.
 * Recheck the helper argument widths and result lifetime. No matching credit.
 */
extern int func_0806E8(long long, long long);
extern long long func_1EB278(int);
extern void func_015DD8(long long, long long, long long);

void func_015D88(long long first, long long second,
                 long long third, long long fourth)
{
    int value = func_0806E8(third, fourth);
    long long result = func_1EB278(value);
    func_015DD8(first, second, result);
}
