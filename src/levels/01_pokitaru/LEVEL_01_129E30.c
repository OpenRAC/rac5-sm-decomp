typedef struct ListNode {
    char pad_00[0x64];
    int key;
    char pad_68[8];
    struct ListNode *next;
} ListNode;

typedef struct ListTable {
    int count;
    ListNode *entries[1];
} ListTable;

ListNode *func_129E30(int index, ListTable *lists)
{
    ListNode *node;

    if (lists == 0)
        return 0;

    node = lists->entries[index];
    if (node != 0) {
        do {
            if (node->key == index)
                break;
            node = node->next;
        } while (node != 0);
    }
    return node;
}
