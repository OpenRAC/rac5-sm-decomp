/* LEVEL_16:0x184F70 -- walks the global node list and passes two words of
   each node's record to the update function. */
typedef struct {
    char pad[0xC];
    int a;
    char pad10[0x20];
    int b;
} Record;

typedef struct Node {
    char pad[0x4];
    Record *record;
    char pad8[0x38];
    struct Node *next;
} Node;

extern Node *D_002E5C94;
extern void func_184E08(int a, int b);

void func_184F70(void *owner)
{
    Node *node;

    for (node = D_002E5C94; node != 0; node = node->next)
        func_184E08(node->record->a, node->record->b);
}
