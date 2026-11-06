/* LEVEL_01.REL:0x037318: Ghidra body 76 bytes.
 * Pinned pure C links 88 bytes and first differs at +8.
 * Recheck the iterator's next-value lifetime across the call. No matching credit.
 */
extern void func_037238(unsigned short *, unsigned short);

void func_037318(unsigned short *first, unsigned short *end)
{
    if (first != end) {
        unsigned short value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_037238(first, value);
            if (next == end) {
                break;
            }
            value = *next;
            first = next;
        }
    }
}
