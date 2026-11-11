/* LEVEL_10:0x153860 -- placement copy of LEVEL_01_154D58.c: walks a node list and calls a helper on matching 0x84-byte entries. */
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct Node {
    struct Node *next;
    char pad[8];
    char *entries;
    u32 count;
} Node;

extern Node *D_0039B1C4;
extern void func_1509D0(void *);

void func_153860(int key)
{
    Node *node = D_0039B1C4;
    while (node != 0) {
        char *entry = node->entries;
        char *end = entry + node->count * 0x84;
        do {
            if (*(u16 *)entry == 2 && *(int *)(entry + 0x58) == key)
                func_1509D0(entry);
            entry += 0x84;
        } while (entry != end);
        node = node->next;
    }
}
