/* LEVEL_23:0x1A8C90 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_001DC51C;
extern char D_001DC658[];
extern char D_001DC678[];
extern char D_001DC5B8[];
extern void func_1A85B8(int a, int b, int c, char *t1, char *t2);
extern void func_1A8DA0(char *p, float a, float b);

void func_1A8C90(int a, int b, int flag)
{
    if (flag)
        func_1A85B8(D_001DC51C, a, b, D_001DC678, D_001DC5B8);
    else
        func_1A85B8(D_001DC51C, a, b, D_001DC658, D_001DC5B8);
}

void func_1A8D00(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1A8DA0(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
