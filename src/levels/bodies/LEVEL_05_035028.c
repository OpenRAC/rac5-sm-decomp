extern void func_034F48(unsigned short *slot, unsigned int value);

void func_035028(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_034F48(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
