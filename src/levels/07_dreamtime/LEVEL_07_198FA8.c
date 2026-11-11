/* LEVEL_07:0x198FA8 -- unlinks the node from the doubly linked list it sits in and clears its back pointer. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Node {
    char pad_00[0x20];
    Link link;
} Node;

void func_198FA8(char *object)
{
    Node *node = *(Node **)(object + 0x58);
    Link *link = &node->link;
    Link *prev = link->prev;

    if (prev != 0) {
        prev->next = link->next;
        if (link->next != 0)
            link->next->prev = link->prev;
        link->prev = 0;
    }
}
