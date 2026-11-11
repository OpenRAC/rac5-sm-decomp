/* LEVEL_01:0x1CC288 -- walks the global list and passes each node's two
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

extern Node *D_00398824;
extern void func_1CC120(int a, int b);

void func_1CC288(void)
{
    Node *node;

    for (node = D_00398824; node != 0; node = node->next)
        func_1CC120(node->info->a, node->info->b);
}
