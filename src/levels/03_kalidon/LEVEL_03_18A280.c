/* LEVEL_03:0x18A280 -- runs the helper on the object, then unlinks its node from the list. */
struct P19338;

typedef struct Node {
    struct Node *next;
    char pad_04[0x10];
    struct Node *prev;
} Node;

extern void func_019338(struct P19338 *p);

void func_18A280(struct P19338 *object)
{
    Node *node = *(Node **)((char *)object + 0x58);
    Node *prev;

    func_019338(object);
    prev = node->prev;
    if (prev != 0) {
        prev->next = node->next;
        if (node->next != 0)
            node->next->prev = node->prev;
        node->prev = 0;
    }
}
