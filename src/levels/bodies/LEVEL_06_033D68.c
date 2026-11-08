extern void func_033C88(unsigned short *slot, unsigned int value);

void func_033D68(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_033C88(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
