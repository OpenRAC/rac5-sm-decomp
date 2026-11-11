/* LEVEL_10:0x1D0530 -- placement copy of LEVEL_01_1CC288.c: walks the global list and passes each node's two
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

extern Node *D_003A1F2C;
extern void func_1D03C8(int a, int b);

void func_1D0530(void)
{
    Node *node;

    for (node = D_003A1F2C; node != 0; node = node->next)
        func_1D03C8(node->info->a, node->info->b);
}
