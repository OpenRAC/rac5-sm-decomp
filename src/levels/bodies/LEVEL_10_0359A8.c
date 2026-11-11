extern void func_035880(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_0357D0(unsigned short *heap, int index, int count, unsigned short value);
extern void func_035908(unsigned short *heap, unsigned short *first);

void func_0359A8(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    func_035880(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_0357D0(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_035908(heap, first);
}
