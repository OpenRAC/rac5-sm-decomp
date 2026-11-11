extern void func_02CE20(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_02CD70(unsigned short *heap, int index, int count, unsigned short value);
extern void func_02CEA8(unsigned short *heap, unsigned short *first);

void func_02CF48(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    func_02CE20(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_02CD70(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_02CEA8(heap, first);
}
