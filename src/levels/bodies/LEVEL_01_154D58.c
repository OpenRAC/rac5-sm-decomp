/* LEVEL_01:0x154D58 -- walks a node list and calls a helper on matching 0x84-byte entries. */
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct Node {
    struct Node *next;
    char pad[8];
    char *entries;
    u32 count;
} Node;

extern Node *D_00391DC4;
extern void func_151EC8(void *);

void func_154D58(int key)
{
    Node *node = D_00391DC4;
    while (node != 0) {
        char *entry = node->entries;
        char *end = entry + node->count * 0x84;
        do {
            if (*(u16 *)entry == 2 && *(int *)(entry + 0x58) == key)
                func_151EC8(entry);
            entry += 0x84;
        } while (entry != end);
        node = node->next;
    }
}
