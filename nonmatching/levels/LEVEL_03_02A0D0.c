/* LEVEL_03.REL:0x02A0D0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 116 bytes, first difference at +20.
 * Recheck the indexed callback table and adjacent global field types. No matching credit.
 */
struct Entry { void (*callback)(int); int other[4]; };
extern struct Entry D_0020C9F8[];
extern unsigned int D_0020C62C;
extern void func_001940(void);

void func_02A0D0(unsigned int index)
{
    void (*callback)(int) = D_0020C9F8[index].callback;
    if (callback != 0) callback(1);
    *(unsigned int *)((char *)func_001940 + D_0020C62C) |= 1u << (index & 31);
}
