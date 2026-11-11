/* LEVEL_04:0x1656F8 -- reports whether any child of the node has children. */
typedef struct Node {
    char pad[0x45];
    unsigned char count;
    char pad46[0xE];
    struct Node **children;
} Node;

int func_1656F8(Node *node)
{
    unsigned int i;
    Node **children = node->children;

    for (i = 0; i < node->count; i++) {
        if (children[i]->count != 0)
            return 1;
    }
    return 0;
}
