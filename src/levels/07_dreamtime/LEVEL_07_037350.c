extern void func_0372E0(unsigned short *heap, int hole, int start, unsigned short value);

void func_037350(unsigned short *heap, int hole, int count, unsigned short value)
{
    int start = hole;
    int child = hole * 2 + 2;

    while (child < count) {
        if (heap[child] < heap[child - 1]) {
            child--;
        }
        heap[hole] = heap[child];
        hole = child;
        child = (hole + 1) * 2;
    }
    if (child == count) {
        heap[hole] = heap[child - 1];
        hole = child - 1;
    }
    func_0372E0(heap, hole, start, value);
}
