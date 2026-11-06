extern void func_036ED0(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_036E20(unsigned short *heap, int index, int count, unsigned short value);
extern void func_036F58(unsigned short *heap, unsigned short *first);

void func_036FF8(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_036ED0(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_036E20(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_036F58(heap, first);
}
