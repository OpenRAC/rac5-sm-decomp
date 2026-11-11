extern void func_038880(unsigned short *slot, unsigned int value);

void func_038960(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_038880(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
