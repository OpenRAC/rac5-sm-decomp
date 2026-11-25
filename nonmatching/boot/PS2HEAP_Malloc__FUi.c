/* USA SCUS_976.15 boot: PS2HEAP_Malloc__FUi, 0x01E8FA28.
 * Observed body: 444 bytes, followed by one alignment word inside its interval.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Measured 17 November 2026: compiled 444 bytes, 432 of 444 bytes equal (first difference at byte 4) under both the pinned default route and gnu-ee-trial, after independent SN linking at the retail address with -O2 -G0.
 * Reconstructed from the retail boot. Allocates from the heap: the size is
 * rounded up to 16 bytes, the free list is scanned for the smallest block that
 * fits, and that block is either handed out whole (when at most 16 bytes would
 * remain) or split, the allocation being carved from its end into a node taken
 * from the node pool (refilled through an unnamed helper when empty). The node
 * is pushed on the used list, the free total drops, and when the largest free
 * block was consumed the maximum is recomputed and the low-water mark updated.
 * The remaining difference is register allocation only: retail keeps the
 * argument in s1 and the chosen block in s0 and copies the argument at entry,
 * while this source gets the rounded size in s1, the block in s0 and an extra
 * move of the argument through a1 (four words differ, same size).
 * Reopen when a source shape is found that keeps the incoming size live across
 * the helper call with lower allocation priority than the chosen block pointer.
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
    unsigned int need;

    if (size == 0) {
        return 0;
    }
    need = (size + 15) & ~15;
    if (gPs2Heap.maxFreeSize < need) {
        return 0;
    }
    prev = 0;
    bestPrev = 0;
    best = 0;
    for (cur = gPs2Heap.freeList; cur != 0; cur = cur->next) {
        if (cur->size >= need) {
            if (best == 0 || cur->size < best->size) {
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
    if (best->size - need < 17) {
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
        node->size = need;
        best->size -= need;
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
