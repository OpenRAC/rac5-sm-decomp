/* USA SCUS_976.15 boot: PAR_Reset__Fv, 0x01E7A258..0x01E7A348.
 * Reconstructed from the owner's retail program and adjacent PAR code.
 * Observed body 240 bytes, no trailing padding. First C form measured with
 * -O2 -G0, rebuilt GNU compilers, GNU assembler and independent SN links:
 * default route 232 bytes, 101 equal positions in the 232-byte compared prefix;
 * gnu-ee-trial 236 bytes, 104 equal positions in the 236-byte compared prefix.
 * Both first differ at byte +0x21 in the initial end-pointer calculation.
 * These are provisional local layout views, not shared complete definitions.
 * Block stride 0x28 is corroborated by accepted PAR_Emit; the sentinel is at
 * +0x10 and the table count at +0x500. The initialized free-block chain has a
 * 0x10 stride. The observed direct caller prepares positive storage count;
 * storage/capacity and indirect-caller invariants remain review obligations.
 * Original list traversal, self links and both pool-reset calls are preserved.
 * No zero-count guard or defensive behavior was added. Reopen with measured
 * evidence for the list/end-pointer source representation and source layout.
 * Not exact; no complete-program gate, acceptance or matching credit.
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

void PAR_Reset__Fv(void) {
    PAR_ResetBlock *block = D_01F695E4.blocks;
    PAR_ResetBlock *end = block + D_01F695E4.count;
    PAR_ResetFreeBlock *free_block;
    PAR_ResetFreeBlock *last;

    for (; block != end; ++block) {
        PAR_ResetNode *head = &block->head;
        PAR_ResetNode *node = head->fieldC;
        while (node != head) {
            PAR_ResetNode *previous = node->fieldC;
            node->field0 = node;
            node->field8 = node;
            node->fieldC = node;
            node->field4 = node;
            node = previous;
        }
        head->field0 = head;
        head->field8 = head;
        head->fieldC = head;
        head->field4 = head;
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
