extern void func_0333B0(unsigned short *slot, unsigned int value);

void func_033490(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_0333B0(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
