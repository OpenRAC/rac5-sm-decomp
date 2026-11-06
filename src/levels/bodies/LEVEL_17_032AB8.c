extern void func_032990(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_0328E0(unsigned short *heap, int index, int count, unsigned short value);
extern void func_032A18(unsigned short *heap, unsigned short *first);

void func_032AB8(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_032990(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_0328E0(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_032A18(heap, first);
}
