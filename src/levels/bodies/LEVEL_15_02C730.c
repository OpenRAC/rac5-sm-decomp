extern void func_02C608(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void func_02C558(unsigned short *heap, int index, int count, unsigned short value);
extern void func_02C690(unsigned short *heap, unsigned short *first);

void func_02C730(unsigned short *heap, unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short top;

    func_02C608(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                func_02C558(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    func_02C690(heap, first);
}
