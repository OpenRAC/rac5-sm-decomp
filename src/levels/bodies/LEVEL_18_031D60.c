extern void func_031C80(unsigned short *slot, unsigned int value);

void func_031D60(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_031C80(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
