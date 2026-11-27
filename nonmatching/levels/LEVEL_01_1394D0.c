/* USA LEVEL_01:1394D0, 204-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 204 bytes: 1 differing words; first difference +0x3C. No matching credit.
 * Remaining issue: branch target: inline ReleaseSlot(&r->slots[i]) fixes the register assignment
 * (was 18 words); retail beqz skips both clears (r->slots[i] = 0 inside the nonzero path) while
 * ours lands on the second clear; putting that store inside the test merges the two givs and
 * drops it (184 B); 15 forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x1394D0 -- callback: when the block is armed, releases its eight pointer slots (clearing the global when it matches), then unlinks the block's node and marks it done. */
typedef struct Node {
    struct Node *next;
    char pad_04[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    Node node;
    unsigned char b18;
    char pad19[0x38 - 0x19];
    int *slots[8];
    char pad58[0xED - 0x58];
    unsigned char armed;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern int *D_001F6398;
extern void func_097840(int *p);

static __inline__ void ReleaseSlot(int **p)
{
    if (*p != 0) {
        if (*p == D_001F6398) {
            D_001F6398 = 0;
        } else {
            func_097840(*p);
        }
        *p = 0;
    }
}

void func_1394D0(Obj *o)
{
    Rec *r = o->rec;
    unsigned int i;

    if (r->armed != 0) {
        for (i = 0; i < 8; i++) {
            ReleaseSlot(&r->slots[i]);
            r->slots[i] = 0;
        }
    }
    if (r->node.back != 0) {
        r->node.back->next = r->node.next;
        if (r->node.next == 0) {
            r->node.back = 0;
        } else {
            r->node.next->back = r->node.back;
            r->node.back = 0;
        }
    }
    r->b18 = 1;
}
