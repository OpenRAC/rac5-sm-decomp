/* LEVEL_01.REL:0x1CD7D0: reviewed 88-byte candidate, held for ABI review.
 * Walks the owner list calling a helper on each node, then clears the list
 * head.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 9
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_01_1CCF10.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_1CD720(void *o, void *n);

struct Node {
    unsigned char pad00[0x6C];
    struct Node *next;
};

struct Owner {
    unsigned char pad00[0x40];
    struct Node *head;
};

void func_1CD7D0(struct Owner *o)
{
    struct Node *n;

    n = o->head;
    while (n != 0) {
        func_1CD720(o, n);
        n = n->next;
    }
    o->head = 0;
}
