/* LEVEL_24:0x0E8630 -- placement copy of LEVEL_01_0F0328.c: walks every group of the object's list and runs the node handler on each node after the head node of the group's chain. */
typedef struct Node {
    struct Node *next_00;
} Node;

typedef struct Group {
    struct Group *next_00;
    char pad_04[8];
    Node *head_0C;
} Group;

extern void func_0E6B00(void *node);

void func_0E8630(char *object)
{
    Group *group = *(Group **)(object + 8);
    Node *node;

    for (; group != 0; group = group->next_00) {
        for (node = group->head_0C->next_00; node != 0; node = node->next_00) {
            func_0E6B00(node);
        }
    }
}
