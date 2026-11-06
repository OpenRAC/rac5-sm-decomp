/* LEVEL_01.REL:0x02A3A8: Ghidra body 68 bytes.
 * Pinned pure C links 68 bytes and first differs at +23.
 * Recheck branch direction and call argument lifetime. No matching credit.
 */
extern int func_02A3F0(void);
extern void func_02A2D8(long long);
extern void func_02A340(long long);

void func_02A3A8(long long value)
{
    if (func_02A3F0() == 0) {
        func_02A2D8(value);
    } else {
        func_02A340(value);
    }
}
