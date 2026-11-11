/* LEVEL_22:0x13E090 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_00166B9C;
extern char D_00166CD8[];
extern char D_00166CF8[];
extern char D_00166C38[];
extern void func_13D9B8(int a, int b, int c, char *t1, char *t2);
extern void func_13E1A0(char *p, float a, float b);

void func_13E090(int a, int b, int flag)
{
    if (flag)
        func_13D9B8(D_00166B9C, a, b, D_00166CF8, D_00166C38);
    else
        func_13D9B8(D_00166B9C, a, b, D_00166CD8, D_00166C38);
}

void func_13E100(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_13E1A0(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
