/* LEVEL_01.REL:0x036ED0: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +36.
 * Retry: Change the measured source/compiler hypothesis; representative still
 * differs.
 * No matching credit.
 */
extern void func_036E20(unsigned short *base, int index, int count, unsigned short value);

void func_036ED0(unsigned short *base, unsigned short *end)
{
    int count = (int)(end - base);
    if (count > 1) {
        int index = (count - 2) / 2;
        unsigned short *element = base + index;
        while (1) {
            func_036E20(base, index, count, *element);
            element--;
            if (index == 0)
                break;
            index--;
        }
    }
}
