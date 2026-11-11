/* LEVEL_24:0x1A9060 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_001DA104;
extern char D_001DA240[];
extern char D_001DA260[];
extern char D_001DA1A0[];
extern void func_1A8988(int a, int b, int c, char *t1, char *t2);
extern void func_1A9170(char *p, float a, float b);

void func_1A9060(int a, int b, int flag)
{
    if (flag)
        func_1A8988(D_001DA104, a, b, D_001DA260, D_001DA1A0);
    else
        func_1A8988(D_001DA104, a, b, D_001DA240, D_001DA1A0);
}

void func_1A90D0(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1A9170(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
