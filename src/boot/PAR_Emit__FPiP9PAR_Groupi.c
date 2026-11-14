/* PAR_Emit__FPiP9PAR_Groupi -- emits into a group's block and moves an otherwise empty group onto the block's list. */
typedef struct Node {
    struct Node *w0;
    struct Node *w4;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct {
    unsigned char pad[0x10];
    unsigned short index;
} tGroup;

typedef struct { char b[0x28]; } tPAR_BLOCK;

extern tPAR_BLOCK par_blocks[];
extern void *func_1E7AC78_PAR_Add_01E7AC78(void *a, void *group, void *block, int count);

void *PAR_Emit__FPiP9PAR_Groupi(int *a, Node *group, int count) {
    tPAR_BLOCK *block = &par_blocks[((tGroup *)group)->index];
    void *result = func_1E7AC78_PAR_Add_01E7AC78(a, group, block, count);
    Node *head;
    Node *first;

    if (group->w4 != group) {
        first = group->next;
        if (first == group) {
            head = (Node *)((char *)block + 0x10);
            if (first != head) {
                first->prev = head;
                first->next = head->next;
                head->next->prev = first;
                head->next = first;
            }
        }
    }
    return result;
}
