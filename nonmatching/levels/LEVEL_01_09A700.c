/* LEVEL_01.REL:0x09A700: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 84 bytes; first differs at +2.
 * Retry: Recover repeated slot-stride evaluation and head-pointer reload under the
 * actual aliasing/layout; current C links 84 of 104 bytes.
 * No matching credit.
 */
typedef unsigned int u32;

typedef struct Node {
    struct Node *next;
    u32 first;
    u32 second;
} Node;

extern char D_0029BCBC[];

void func_09A700(u32 index, u32 first, u32 second, u32 slot)
{
    Node *node = *(Node **)(D_0029BCBC + slot * 0x170c);
    Node **head;
    if (!node)
        return;
    head = (Node **)(D_0029BCBC + slot * 0x170c + 4 + index * 4);
    *(Node **)(D_0029BCBC + slot * 0x170c) = node->next;
    node->first = first;
    node->second = second;
    node->next = *head;
    *head = node;
}
