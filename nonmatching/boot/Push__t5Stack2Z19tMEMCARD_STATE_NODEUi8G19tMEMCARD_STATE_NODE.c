/* USA SCUS_976.15 boot: Push__t5Stack2Z19tMEMCARD_STATE_NODEUi8G19tMEMCARD_STATE_NODE,
 * 0x01E649C0.
 * Observed body: 120 bytes; a separate unnamed 56-byte routine follows inside the
 * 176-byte interval, with no alignment word between them.
 * Measured 28 November 2026: all 120 body bytes are exact after an independent link
 * at the retail address under the rebuilt default pinned route, gnu-ee-trial and
 * gnu-ee-trial-divpad, -O2 -G0. Local exactness with rebuilt tools is not
 * qualification, promotion or C matching credit.
 * Reconstructed from the retail boot. Template instance Stack<tMEMCARD_STATE_NODE, 8>
 * ::Push, modelled in C under its mangled name. The node is passed by value (the
 * caller passes its address and the callee copies it to the stack first). If the
 * stack is not full (count at 0x80 equal to 8) the node is stored at the count index,
 * the count is incremented and 1 is returned; otherwise 0 is returned.
 * The full test is an inline predicate (its value is computed with xori, as in
 * retail), and the element address is formed as data + count so that the index is
 * the first addu operand; indexing data[count] swaps the operands (119 of 120).
 * The stack layout (eight 16-byte nodes, count word at 0x80) follows the accepted
 * Reset and constructor; the signedness of the count is not proven by this body.
 */
typedef struct tMEMCARD_STATE_NODE {
    int field0;
    int field4;
    int field8;
    int fieldC;
} tMEMCARD_STATE_NODE;

typedef struct {
    tMEMCARD_STATE_NODE data[8];
    unsigned int count;
} tStack2Z19tMEMCARD_STATE_NODEUi8;

static inline int IsFull(tStack2Z19tMEMCARD_STATE_NODEUi8 *self) {
    return self->count == 8;
}

int Push__t5Stack2Z19tMEMCARD_STATE_NODEUi8G19tMEMCARD_STATE_NODE(tStack2Z19tMEMCARD_STATE_NODEUi8 *self, tMEMCARD_STATE_NODE node) {
    if (IsFull(self)) return 0;
    *(self->data + self->count++) = node;
    return 1;
}
