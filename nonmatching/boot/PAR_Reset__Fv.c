/* USA SCUS_976.15 boot: PAR_Reset__Fv, 0x01E7A258..0x01E7A348.
 * Reconstructed from the owner's retail program and adjacent PAR code.
 * Observed body 240 bytes, no trailing padding. Measured 16 November 2026:
 * rebuilt default GNU, -O2 -G0, GNU assembler and an independent SN link
 * emit actual 240-byte object and linked text; every linked body byte agrees.
 * These local comparisons use rebuilt tools and remain unqualified;
 * acceptance and C credit require separate maintainer review.
 * gnu-ee-trial instead emits 244 bytes, 191 equal positions in the compared
 * 240-byte prefix, first difference +0x98 at the free-chain loop padding.
 * Earlier scalar traversal emitted 232/236 bytes, first difference +0x21.
 * An authored four-byte iterator view separates the sentinel from traversal:
 * comparison inspects iterator objects, while a previous iterator snapshots
 * the reverse link before the current node is reset. The two inline helpers
 * emit no separate function and are not claimed as named retail bodies.
 * The known two-chain reset order is retained; no forced register, assembly,
 * volatile steering, dead use or extra observable operation is introduced.
 * Layout views remain provisional: block stride 0x28 is corroborated by
 * accepted PAR_Emit, sentinel +0x10, table count +0x500, free-block stride 0x10.
 * Original self links, free-chain traversal and both pool-reset calls remain.
 * The reviewed direct caller prepares positive storage count; arbitrary
 * storage/capacity, indirect callers and semantic boundaries still need review.
 * No zero-count guard or defensive behavior is added. Qualification and
 * complete-program integration remain separate from this retained attempt.
 */
typedef struct PAR_ResetNode {
    struct PAR_ResetNode *field0;
    struct PAR_ResetNode *field4;
    struct PAR_ResetNode *field8;
    struct PAR_ResetNode *fieldC;
} PAR_ResetNode;

typedef struct {
    unsigned char prefix[0x10];
    PAR_ResetNode head;
    unsigned char suffix[8];
} PAR_ResetBlock;

typedef struct {
    PAR_ResetBlock blocks[32];
    int count;
} PAR_ResetTable;

typedef struct PAR_ResetFreeBlock {
    void *field0;
    struct PAR_ResetFreeBlock *next;
    void *field8;
    void *fieldC;
} PAR_ResetFreeBlock;

typedef struct {
    PAR_ResetFreeBlock *free;
    PAR_ResetFreeBlock *storage;
    int count;
    unsigned char pool1[0x14];
    unsigned char pool2[0x14];
} PAR_ResetState;

extern PAR_ResetTable D_01F695E4;
extern PAR_ResetState D_01F695A8;
extern void func_1E7B758(void *);
extern void func_1E7B7B8(void *);

typedef struct { PAR_ResetNode *node; } PAR_ResetIterator;

typedef char PAR_ResetNode_size_check[sizeof(PAR_ResetNode) == 0x10 ? 1 : -1];
typedef char PAR_ResetBlock_size_check[sizeof(PAR_ResetBlock) == 0x28 ? 1 : -1];
typedef char PAR_ResetIterator_size_check[sizeof(PAR_ResetIterator) == 4 ? 1 : -1];

static inline int par_iterator_different(const PAR_ResetIterator *left, const PAR_ResetIterator *right) {
    return left->node != right->node;
}
static inline PAR_ResetIterator par_previous(PAR_ResetIterator iterator) {
    iterator.node = iterator.node->fieldC;
    return iterator;
}

void PAR_Reset__Fv(void) {
    PAR_ResetBlock *block = D_01F695E4.blocks;
    PAR_ResetBlock *end = block + D_01F695E4.count;
    PAR_ResetFreeBlock *free_block;
    PAR_ResetFreeBlock *last;

    for (; block != end;) {
        PAR_ResetNode *head = &block->head;
        PAR_ResetBlock *next = block + 1;
        PAR_ResetIterator it = {block->head.fieldC};
        PAR_ResetIterator finish = {head};
        while (par_iterator_different(&it, &finish)) {
            PAR_ResetIterator previous = par_previous(it);
            PAR_ResetNode *node = it.node;
            node->field8 = node;
            node->fieldC = node;
            node->field4 = node;
            node->field0 = node;
            it = previous;
        }
        block->head.field8 = head;
        block->head.fieldC = head;
        block->head.field4 = head;
        block->head.field0 = head;
        block = next;
    }
    free_block = D_01F695A8.storage;
    last = free_block + D_01F695A8.count - 1;
    for (; free_block != last; ++free_block)
        free_block->next = free_block + 1;
    free_block->next = 0;
    D_01F695A8.free = D_01F695A8.storage;
    func_1E7B758(D_01F695A8.pool1);
    func_1E7B7B8(D_01F695A8.pool2);
}
