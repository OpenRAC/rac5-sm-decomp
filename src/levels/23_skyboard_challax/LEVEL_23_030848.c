extern void func_030768(unsigned short *slot, unsigned int value);

void func_030848(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_030768(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
