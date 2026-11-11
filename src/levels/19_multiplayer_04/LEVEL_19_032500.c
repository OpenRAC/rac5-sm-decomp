extern void func_0323D8(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_032328(unsigned short *heap, int index, int count, unsigned short value);
extern void func_032460(unsigned short *heap, unsigned short *first);

void func_032500(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    func_0323D8(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_032328(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_032460(heap, first);
}
