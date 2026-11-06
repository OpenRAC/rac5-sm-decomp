/* FRONTEND.REL:0x024958: Ghidra body 124 bytes.
 * Pinned pure C links 124 bytes and first differs at +0.
 * Recheck memcpy argument ABI and saved-register order. No matching credit.
 */
extern void *func_0248D0(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void func_024958(int mode, void *first, void *second)
{
    void *source = func_0248D0(mode, first, 0);
    void *target = func_0248D0(mode, second, 0);
    unsigned int length;
    if (mode < 31) {
        length = 16;
    } else if (mode < 64) {
        length = 4;
    } else {
        length = 8;
    }
    memcpy(target, source, length);
}
