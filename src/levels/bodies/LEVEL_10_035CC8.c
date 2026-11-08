extern void func_035BE8(unsigned short *slot, unsigned int value);

void func_035CC8(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_035BE8(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
