extern void func_037400(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_037350(unsigned short *heap, int index, int count, unsigned short value);
extern void func_037488(unsigned short *heap, unsigned short *first);

void func_037528(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    func_037400(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_037350(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_037488(heap, first);
}
