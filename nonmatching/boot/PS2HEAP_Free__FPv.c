/* USA SCUS_976.15 boot: PS2HEAP_Free__FPv, 0x01E8FBE8.
 * Observed body: 308 bytes, followed by one alignment word inside its interval.
 * Measured 17 November 2026: all 308 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route (pinned);
 * under gnu-ee-trial the same source gives 268 of 308 bytes (first difference at byte 40). Flags -O2 -G0, default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Returns an allocation to the heap: it
 * looks the block up by address in the used list, unlinks its node, adds its
 * size to the free total, inserts the node into the address-sorted free list,
 * merges it with the following and the preceding free node when adjacent
 * (recycling the absorbed node into the node pool) and raises the largest
 * free block size if needed. An address that is not in the used list is ignored.
 * The used-list search had to be a do/while with the early return inside the
 * loop, and the free-list scan needed its own variable apart from the merge one.
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

void PS2HEAP_Free__FPv(void *block) {
    tPs2HeapNode *prev;
    tPs2HeapNode *cur;
    tPs2HeapNode *next;
    tPs2HeapNode *scan;

    cur = gPs2Heap.usedList;
    do {
        prev = cur;
        cur = cur->next;
        if (cur == 0) {
            return;
        }
    } while (cur->addr != (unsigned int)block);
    gPs2Heap.totalFreeSize += cur->size;
    prev->next = cur->next;
    cur->next = 0;

    prev = gPs2Heap.freeList;
    scan = prev->next;
    while (scan != 0 && scan->addr < (unsigned int)block) {
        prev = scan;
        scan = prev->next;
    }
    cur->next = prev->next;
    prev->next = cur;

    next = cur->next;
    if (next != 0 && cur->addr + cur->size == next->addr) {
        cur->size += next->size;
        cur->next = next->next;
        next->size = 0;
        next->addr = 0;
        next->next = gPs2Heap.pool;
        gPs2Heap.pool = next;
    }
    if (prev->addr + prev->size == cur->addr) {
        prev->size += cur->size;
        prev->next = cur->next;
        cur->size = 0;
        cur->addr = 0;
        cur->next = gPs2Heap.pool;
        gPs2Heap.pool = cur;
        cur = prev;
    }
    if (gPs2Heap.maxFreeSize < cur->size) {
        gPs2Heap.maxFreeSize = cur->size;
    }
}
