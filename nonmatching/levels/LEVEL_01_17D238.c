/* LEVEL_01.REL:0x17D238: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +0.
 * Recheck the evidenced delay loop under the pinned optimizer. No matching credit.
 */
extern void func_17D1C8(void);

void func_17D238(void)
{
    volatile int index;
    func_17D1C8();
    for (index = 1; index != 6; index++) {
    }
}
