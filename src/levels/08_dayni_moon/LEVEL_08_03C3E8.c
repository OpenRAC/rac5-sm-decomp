extern void func_03C308(unsigned short *slot, unsigned int value);

void func_03C3E8(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_03C308(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
