/* USA LEVEL_01.REL:0x0F0328 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0F0268 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Node {
    struct Node *next_00;
} Node;

typedef struct Group {
    struct Group *next_00;
    char pad_04[8];
    Node *head_0C;
} Group;

extern void func_0F0268(void *node);

void func_0F0328(char *object)
{
    Group *group = *(Group **)(object + 8);
    Node *node;

    for (; group != 0; group = group->next_00) {
        for (node = group->head_0C->next_00; node != 0; node = node->next_00) {
            func_0F0268(node);
        }
    }
}
