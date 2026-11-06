/* LEVEL_01.REL:0x1105E8: Ghidra body 128 bytes.
 * Pinned pure C links 120 bytes and first differs at +0.
 * Recheck allocator result lifetime and the named memset call. No matching credit.
 */
extern int func_112A18(void);
extern void *func_10F7A0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00217698[];
extern void *D_00206DA4;
extern int D_00206DA0;

int func_1105E8(void)
{
    int result = func_112A18();
    if (result == 0) {
        void *memory = func_10F7A0(0x10, 0xd, D_00217698, 0x78);
        D_00206DA4 = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_00206DA0 = 1;
            result = 1;
        }
    }
    return result;
}
