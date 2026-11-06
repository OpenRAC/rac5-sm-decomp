extern void func_0383F8(unsigned short *heap, int hole, int start, unsigned short value);

void func_038468(unsigned short *heap, int hole, int count, unsigned short value)
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
    func_0383F8(heap, hole, start, value);
}
