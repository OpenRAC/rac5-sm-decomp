extern void func_02D188(unsigned short *slot, unsigned int value);

void func_02D268(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_02D188(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
