/* LEVEL_01:0x037318 -- placement copy of LEVEL_02_03BD60.c. */
extern void func_037238(unsigned short *slot, unsigned int value);

void func_037318(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_037238(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
