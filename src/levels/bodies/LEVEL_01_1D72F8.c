/* LEVEL_01:0x1D72F8 -- dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_0020929C;
extern char D_002093D8[];
extern char D_002093F8[];
extern char D_00209338[];
extern void func_1D6C20(int a, int b, int c, char *t1, char *t2);
extern void func_1D7408(char *p, float a, float b);

void func_1D72F8(int a, int b, int flag)
{
    if (flag)
        func_1D6C20(D_0020929C, a, b, D_002093F8, D_00209338);
    else
        func_1D6C20(D_0020929C, a, b, D_002093D8, D_00209338);
}

void func_1D7368(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1D7408(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
