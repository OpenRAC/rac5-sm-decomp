/* LEVEL_01.REL:0x0D7680: Ghidra body 80 bytes.
 * Pinned pure C links 80 bytes and first differs at +34.
 * Recheck equality-test lowering and branch layout after the second call. No matching credit.
 */
extern void *func_01A868(int);
extern int func_0BBD30(void);
extern void func_0BB3A8(int);
extern void func_0BC400(int, int);

void func_0D7680(void)
{
    if (func_01A868(6) != 0) {
        if (func_0BBD30() != 0x22) {
            func_0BB3A8(0x22);
        }
    } else {
        func_0BC400(0x22, 0);
    }
}
