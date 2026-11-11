extern void func_032740(unsigned short *slot, unsigned int value);

void func_032820(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_032740(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
