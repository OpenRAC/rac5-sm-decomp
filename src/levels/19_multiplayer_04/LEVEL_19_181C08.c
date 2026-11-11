/* LEVEL_19:0x181C08 -- placement copy of LEVEL_16_184F70.c: walks the global node list and passes two words of
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

extern Node *D_002E5E3C;
extern void func_181AA0(int a, int b);

void func_181C08(void *owner)
{
    Node *node;

    for (node = D_002E5E3C; node != 0; node = node->next)
        func_181AA0(node->record->a, node->record->b);
}
