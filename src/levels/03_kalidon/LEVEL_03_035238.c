extern void func_035110(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_035060(unsigned short *heap, int index, int count, unsigned short value);
extern void func_035198(unsigned short *heap, unsigned short *first);

void func_035238(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    func_035110(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_035060(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_035198(heap, first);
}
