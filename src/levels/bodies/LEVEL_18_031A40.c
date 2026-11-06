extern void func_031918(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_031868(unsigned short *heap, int index, int count, unsigned short value);
extern void func_0319A0(unsigned short *heap, unsigned short *first);

void func_031A40(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_031918(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_031868(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_0319A0(heap, first);
}
