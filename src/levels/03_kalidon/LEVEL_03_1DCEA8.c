/* LEVEL_03:0x1DCEA8 -- placement copy of LEVEL_01_1CC288.c: walks the global list and passes each node's two
   info words to the helper. */
typedef struct {
    char pad[0xC];
    int a;
    char pad10[0x20];
    int b;
} Info;

typedef struct Node {
    int pad0;
    Info *info;
    char pad8[0x34];
    struct Node *next;
} Node;

extern Node *D_003B3974;
extern void func_1DCD40(int a, int b);

void func_1DCEA8(void)
{
    Node *node;

    for (node = D_003B3974; node != 0; node = node->next)
        func_1DCD40(node->info->a, node->info->b);
}
