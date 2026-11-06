/* LEVEL_01.REL:0x0246D0: Ghidra body 84 bytes.
 * Pinned pure C links 80 bytes and first differs at +12.
 * Recheck the shared 0x58-byte record layout and pointer-index schedule. No matching credit.
 */
typedef struct {
    char earlier[0x10];
    void *slots[18];
} Entry;

extern Entry D_001F35D8[];

void *func_0246D0(unsigned int first, int second, int index)
{
    index++;
    if (first < 25 && index >= 0 && index < 2) {
        return D_001F35D8[first + index].slots[second];
    }
    return 0;
}
