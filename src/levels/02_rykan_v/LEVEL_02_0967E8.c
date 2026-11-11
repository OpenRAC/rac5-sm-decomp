typedef struct Node Node;
struct Node {
    int unused;
    unsigned int key;
    char pad[0x1c];
    Node *next;
};

void func_0967E8(Node **head, Node *entry)
{
    Node *current = *head;
    Node *previous = 0;
    if (current != 0 && current->key < entry->key) {
        do {
            previous = current;
            current = current->next;
        } while (current != 0 && current->key < entry->key);
    }
    entry->next = current;
    if (previous != 0)
        previous->next = entry;
    else
        *head = entry;
}
