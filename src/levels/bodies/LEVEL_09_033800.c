extern void func_0336D8(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_033628(unsigned short *heap, int index, int count, unsigned short value);
extern void func_033760(unsigned short *heap, unsigned short *first);

void func_033800(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_0336D8(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_033628(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_033760(heap, first);
}
