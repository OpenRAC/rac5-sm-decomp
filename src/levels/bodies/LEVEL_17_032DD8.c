extern void func_032CF8(unsigned short *slot, unsigned int value);

void func_032DD8(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_032CF8(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
