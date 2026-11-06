/* LEVEL_01.REL:0x02A2D8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 116 bytes, first difference at +20.
 * Recheck the indexed callback table and adjacent global field types. No matching credit.
 */
struct Entry { void (*callback)(int); int other[4]; };
extern struct Entry D_001F4378[];
extern unsigned int D_001F3FAC;
extern void func_001940(void);

void func_02A2D8(unsigned int index)
{
    void (*callback)(int) = D_001F4378[index].callback;
    if (callback != 0) callback(1);
    *(unsigned int *)((char *)func_001940 + D_001F3FAC) |= 1u << (index & 31);
}
