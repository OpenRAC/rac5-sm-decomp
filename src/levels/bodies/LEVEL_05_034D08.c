extern void func_034BE0(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_034B30(unsigned short *heap, int index, int count, unsigned short value);
extern void func_034C68(unsigned short *heap, unsigned short *first);

void func_034D08(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_034BE0(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_034B30(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_034C68(heap, first);
}
