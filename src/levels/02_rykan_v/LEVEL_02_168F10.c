/* LEVEL_02:0x168F10 -- unlinks the node from the doubly linked list it sits in, clears its back pointer and its owner field. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Node {
    char pad_00[4];
    Link link;
} Node;

typedef struct NodeF {
    char pad_00[0x14];
    int owner;
} NodeF;

void func_168F10(char *object)
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
    ((NodeF *)node)->owner = 0;
}
