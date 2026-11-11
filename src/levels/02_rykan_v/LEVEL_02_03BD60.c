extern void func_03BC80(unsigned short *slot, unsigned int value);

void func_03BD60(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            func_03BC80(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
