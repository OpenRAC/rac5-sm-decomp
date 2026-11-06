/* LEVEL_01.REL:0x17CB40: Ghidra body 72 bytes.
 * Pinned pure C links 80 bytes and first differs at +4.
 * Recheck floating-point constant ABI and post-call byte store. No matching credit.
 */
extern void func_07CD28(unsigned int, int, long long, int, int, int);

void func_17CB40(long long record)
{
    func_07CD28(0x3dcccccdU, 0, record, 3, 0, 1);
    *(unsigned char *)((int)record + 0x45) = 1;
}
