/* LEVEL_01.REL:0x024F18: Ghidra body 100 bytes.
 * Pinned pure C links 100 bytes and first differs at +16.
 * Recheck asset-index branch direction and helper arguments. No matching credit.
 */
extern void func_027760(void);
extern void func_025200(unsigned long long, int);
extern void func_0277E8(unsigned long long);
extern int D_0021A7F0;

int func_024F18(unsigned long long index, long long enabled)
{
    if (index >= 25) {
        return 0;
    }
    if (enabled == 0) {
        func_0277E8(index);
    } else {
        func_027760();
        func_025200(index, D_0021A7F0);
    }
    return 1;
}
