extern void *memmove(void *destination, const void *source, unsigned int size);
extern void func_02D188(unsigned short *slot, unsigned int value);

void func_02D1C0(unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short *next;

    if (first == last) {
        return;
    }
    slot = first + 1;
    if (slot == last) {
        return;
    }
    for (;;) {
        unsigned int value = *slot;
        if (value < (unsigned int)*first) {
            int count = slot - first;
            slot++;
            memmove(slot - count, first, count * 2);
            *first = value;
            next = slot;
        } else {
            func_02D188(slot, value);
            next = slot + 1;
        }
        slot = next;
        if (slot == last) {
            break;
        }
    }
}
