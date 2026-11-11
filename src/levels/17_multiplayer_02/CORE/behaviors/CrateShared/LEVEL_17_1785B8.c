/* LEVEL_17:0x1785B8 -- placement copy of LEVEL_16_184F70.c: walks the global node list and passes two words of
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

extern Node *D_002D6E84;
extern void func_178450(int a, int b);

void func_1785B8(void *owner)
{
    Node *node;

    for (node = D_002D6E84; node != 0; node = node->next)
        func_178450(node->record->a, node->record->b);
}
