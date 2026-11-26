/* USA SCUS_976.15 boot: PS2HEAP_Malloc__FUi, 0x01E8FA28.
 * Observed body: 444 bytes, followed by one alignment word inside its interval.
 * Measured 26 November 2026: all 444 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Allocates from the heap: the size is
 * rounded up to 16 bytes, the free list is scanned for the smallest block that
 * fits, and that block is either handed out whole (when at most 16 bytes would
 * remain) or split, the allocation being carved from its end into a node taken
 * from the node pool (refilled through an unnamed helper when empty). The node
 * is pushed on the used list, the free total drops, and when the largest free
 * block was consumed the maximum is recomputed and the low-water mark updated.
 * The size is rounded in place in the argument, and the scan records a new
 * best block in two places (first fitting block, then any smaller one); with
 * a single combined condition the extra references are missing, the rounded
 * size outranks the chosen block in register allocation and the two swap
 * their saved registers.
 */
typedef struct tPs2HeapNode {
    struct tPs2HeapNode *next;
    unsigned int size;
    unsigned int addr;
    unsigned int pad;
} tPs2HeapNode;

typedef struct {
    tPs2HeapNode *freeList;
    tPs2HeapNode *usedList;
    tPs2HeapNode *pool;
    int unk0C;
    unsigned int initialSize;
    unsigned int totalFreeSize;
    unsigned int maxFreeSize;
    unsigned int minMaxFreeSize;
} tPs2Heap;

extern tPs2Heap gPs2Heap; /* 0x01FD0818 */
extern int func_1E8FD40(void);

void *PS2HEAP_Malloc__FUi(unsigned int size) {
    tPs2HeapNode *cur;
    tPs2HeapNode *prev;
    tPs2HeapNode *best;
    tPs2HeapNode *bestPrev;
    tPs2HeapNode *node;
    int wasMax;

    if (size == 0) {
        return 0;
    }
    size = (size + 15) & ~15;
    if (gPs2Heap.maxFreeSize < size) {
        return 0;
    }
    prev = 0;
    bestPrev = 0;
    best = 0;
    for (cur = gPs2Heap.freeList; cur != 0; cur = cur->next) {
        if (cur->size >= size) {
            if (best == 0) {
                bestPrev = prev;
                best = cur;
            } else if (cur->size < best->size) {
                bestPrev = prev;
                best = cur;
            }
        }
        prev = cur;
    }
    if (best == 0) {
        return 0;
    }
    wasMax = best->size == gPs2Heap.maxFreeSize;
    if (best->size - size < 17) {
        bestPrev->next = best->next;
        best->next = 0;
        node = best;
    } else {
        if (gPs2Heap.pool == 0) {
            if (func_1E8FD40() != 0) {
                return 0;
            }
        }
        node = gPs2Heap.pool;
        gPs2Heap.pool = node->next;
        node->next = 0;
        node->size = size;
        best->size -= size;
        node->addr = best->addr + best->size;
    }
    node->next = gPs2Heap.usedList->next;
    gPs2Heap.usedList->next = node;
    gPs2Heap.totalFreeSize -= node->size;
    if (wasMax) {
        gPs2Heap.maxFreeSize = 0;
        for (cur = gPs2Heap.freeList; cur != 0; cur = cur->next) {
            if (cur->size > gPs2Heap.maxFreeSize) {
                gPs2Heap.maxFreeSize = cur->size;
            }
        }
        if (gPs2Heap.maxFreeSize < gPs2Heap.minMaxFreeSize) {
            gPs2Heap.minMaxFreeSize = gPs2Heap.maxFreeSize;
        }
    }
    return (void *)node->addr;
}
