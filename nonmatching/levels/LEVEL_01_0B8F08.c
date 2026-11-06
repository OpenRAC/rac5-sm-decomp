/* LEVEL_01.REL:0x0B8F08: Ghidra body 92 bytes.
 * Pinned pure C links 88 bytes and first differs at +4.
 * Recheck conditional helper result and forwarded argument widths. No matching credit.
 */
extern void func_18D4A0(void);
extern int func_1324B0(long long);
extern void func_0B8F90(long long, int, int, int);

void func_0B8F08(long long first, long long enabled, long long third)
{
    int result;
    if (enabled != 0) {
        func_18D4A0();
    }
    result = func_1324B0(third);
    if (result != 0) {
        func_0B8F90(first, result, 0, 0x5a);
    }
}
