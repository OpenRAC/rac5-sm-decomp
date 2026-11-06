/* LEVEL_09.REL:0x029140: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 116 bytes, first difference at +20.
 * Recheck the indexed callback table and adjacent global field types. No matching credit.
 */
struct Entry { void (*callback)(int); int other[4]; };
extern struct Entry D_001DE178[];
extern unsigned int D_001DDDAC;
extern void func_001940(void);

void func_029140(unsigned int index)
{
    void (*callback)(int) = D_001DE178[index].callback;
    if (callback != 0) callback(1);
    *(unsigned int *)((char *)func_001940 + D_001DDDAC) |= 1u << (index & 31);
}
