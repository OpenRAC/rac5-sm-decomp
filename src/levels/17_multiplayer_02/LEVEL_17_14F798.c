/* LEVEL_17:0x14F798 -- sets up the object's effect, releases its handle and unlinks its data block from the doubly linked list. */
typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
} Node;

extern char D_002D63F8[];
extern char D_001B73E0[];
extern void func_0629F8(char *object, char *a, char *b);
extern void func_011ED0(char *pos, float a, float b, float c, float d, float e);
extern void func_073DB0(char *handle);

void func_14F798(char *object)
{
    char *rec = *(char **)(object + 0x58);
    Node *node;

    func_0629F8(object, D_002D63F8, D_001B73E0);
    func_011ED0(object + 0x30, 49.0f, 400.0f, 0.0f, 15.0f, 15.0f);
    if (*(char **)(rec + 0x4C) != 0) {
        func_073DB0(*(char **)(rec + 0x4C));
        *(int *)(rec + 0x4C) = 0;
    }
    node = (Node *)(rec + 0x34);
    if (node->prev != 0) {
        node->prev->next = node->next;
        if (node->next != 0)
            node->next->prev = node->prev;
        node->prev = 0;
    }
}
