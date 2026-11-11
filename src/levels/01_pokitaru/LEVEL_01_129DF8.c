/* LEVEL_01:0x129DF8 -- finds the first list node after the owner whose key equals the owner key. */
struct Node { unsigned char pad[0x64]; int key; unsigned char pad2[8]; struct Node *next; };

struct Node *func_129DF8(struct Node *owner)
{
    struct Node *node;

    node = owner->next;
    if (node != 0) {
        int key = owner->key;
        do {
            if (node->key == key) {
                break;
            }
            node = node->next;
        } while (node != 0);
    }
    return node;
}
