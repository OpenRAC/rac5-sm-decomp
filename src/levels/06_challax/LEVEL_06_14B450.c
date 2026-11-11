/* LEVEL_06:0x14B450 -- placement copy of LEVEL_01_154D58.c: walks a node list and calls a helper on matching 0x84-byte entries. */
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct Node {
    struct Node *next;
    char pad[8];
    char *entries;
    u32 count;
} Node;

extern Node *D_0037EB44;
extern void func_1485C0(void *);

void func_14B450(int key)
{
    Node *node = D_0037EB44;
    while (node != 0) {
        char *entry = node->entries;
        char *end = entry + node->count * 0x84;
        do {
            if (*(u16 *)entry == 2 && *(int *)(entry + 0x58) == key)
                func_1485C0(entry);
            entry += 0x84;
        } while (entry != end);
        node = node->next;
    }
}
