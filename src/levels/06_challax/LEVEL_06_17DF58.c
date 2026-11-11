/* LEVEL_06:0x17DF58 -- marks the object and unlinks its node from the
   doubly linked list it is on. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *prev;
} Node;

typedef struct {
    char pad[0x58];
    Node *node;
    char pad5c[0x8];
    unsigned int flags;
} Obj;

void func_17DF58(Obj *obj)
{
    Node *node;

    obj->flags |= 0x20;
    node = obj->node;
    if (node->prev) {
        node->prev->next = node->next;
        if (node->next)
            node->next->prev = node->prev;
        node->prev = 0;
    }
}
