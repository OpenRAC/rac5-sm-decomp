/* LEVEL_19.REL:0x0278C8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 116 bytes, first difference at +20.
 * Recheck the indexed callback table and adjacent global field types. No matching credit.
 */
struct Entry { void (*callback)(int); int other[4]; };
extern struct Entry D_001A3028[];
extern unsigned int D_001A2C34;
extern void func_001940(void);

void func_0278C8(unsigned int index)
{
    void (*callback)(int) = D_001A3028[index].callback;
    if (callback != 0) callback(1);
    *(unsigned int *)((char *)func_001940 + D_001A2C34) |= 1u << (index & 31);
}
