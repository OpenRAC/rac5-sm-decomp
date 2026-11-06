/* LEVEL_02.REL:0x02AAA0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 116 bytes, first difference at +20.
 * Recheck the indexed callback table and adjacent global field types. No matching credit.
 */
struct Entry { void (*callback)(int); int other[4]; };
extern struct Entry D_00208FF8[];
extern unsigned int D_00208C2C;
extern void func_001940(void);

void func_02AAA0(unsigned int index)
{
    void (*callback)(int) = D_00208FF8[index].callback;
    if (callback != 0) callback(1);
    *(unsigned int *)((char *)func_001940 + D_00208C2C) |= 1u << (index & 31);
}
