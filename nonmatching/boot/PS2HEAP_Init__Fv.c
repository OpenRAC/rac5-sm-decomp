/* USA SCUS_976.15 boot: PS2HEAP_Init__Fv, 0x01E8F970.
 * Observed body: 184 bytes (the whole next-label interval; no alignment word).
 * Measured 28 November 2026: 151 of 184 bytes equal, first difference at byte 6,
 * under the rebuilt default GNU route (pinned), -O2 -G0, default GNU assembler.
 * gnu-ee-trial gives 188 bytes (131 equal); the divpad routes equal pinned.
 * Not a match; no promotion or matching credit is claimed.
 * Reconstructed from the retail boot. Initializes the heap: node 0 is the empty
 * used-list head, node 1 the free-list head linked to node 2, which describes
 * the whole heap (_higPs2Heap, HIGPS2_HEAP_SIZE); nodes 3..255 are chained into
 * the node pool, and the size, free total, largest free block and low-water
 * mark are all set to the heap size. The store order and the loop shape match;
 * the remaining difference is a permutation of four argument registers in the
 * prologue (the three address halves and the loaded heap size) and the order
 * of the first four stores after the loop. Placing the pool store before the
 * sentinel store changes the loop padding (176 bytes); local base pointers lose
 * the address rematerialization (172 bytes).
 * Reopen when a source-order or declaration change moves the heap-size and
 * gPs2Heap high halves to the retail registers without disturbing the loop.
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

extern unsigned int _higPs2Heap;
extern unsigned int HIGPS2_HEAP_SIZE;
extern tPs2Heap gPs2Heap;
extern tPs2HeapNode gPs2HeapBlocks[256];

void PS2HEAP_Init__Fv(void) {
    int i;

    gPs2Heap.usedList = &gPs2HeapBlocks[0];
    gPs2HeapBlocks[2].size = HIGPS2_HEAP_SIZE;
    gPs2HeapBlocks[1].next = &gPs2HeapBlocks[2];
    gPs2HeapBlocks[2].addr = _higPs2Heap;
    gPs2Heap.freeList = &gPs2HeapBlocks[1];
    gPs2HeapBlocks[0].next = 0;
    gPs2HeapBlocks[0].size = 0;
    gPs2HeapBlocks[0].addr = 0;
    gPs2HeapBlocks[1].size = 0;
    gPs2HeapBlocks[1].addr = 0;
    gPs2HeapBlocks[2].next = 0;
    for (i = 3; i < 255; i++) {
        gPs2HeapBlocks[i].next = &gPs2HeapBlocks[i + 1];
    }
    gPs2HeapBlocks[255].next = 0;
    gPs2Heap.pool = &gPs2HeapBlocks[3];
    gPs2Heap.unk0C = 0;
    gPs2Heap.initialSize = HIGPS2_HEAP_SIZE;
    gPs2Heap.totalFreeSize = HIGPS2_HEAP_SIZE;
    gPs2Heap.maxFreeSize = HIGPS2_HEAP_SIZE;
    gPs2Heap.minMaxFreeSize = HIGPS2_HEAP_SIZE;
}
