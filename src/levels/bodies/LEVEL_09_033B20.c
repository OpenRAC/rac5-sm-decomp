extern void func_033A40(unsigned short *slot, unsigned int value);

void func_033B20(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_033A40(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
