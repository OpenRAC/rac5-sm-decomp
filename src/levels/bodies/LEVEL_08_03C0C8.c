extern void func_03BFA0(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_03BEF0(unsigned short *heap, int index, int count, unsigned short value);
extern void func_03C028(unsigned short *heap, unsigned short *first);

void func_03C0C8(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_03BFA0(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_03BEF0(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_03C028(heap, first);
}
