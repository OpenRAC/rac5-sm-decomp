/* LEVEL_03:0x1E92F8 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_00222164;
extern char D_002222A0[];
extern char D_002222C0[];
extern char D_00222200[];
extern void func_1E8C20(int a, int b, int c, char *t1, char *t2);
extern void func_1E9408(char *p, float a, float b);

void func_1E92F8(int a, int b, int flag)
{
    if (flag)
        func_1E8C20(D_00222164, a, b, D_002222C0, D_00222200);
    else
        func_1E8C20(D_00222164, a, b, D_002222A0, D_00222200);
}

void func_1E9368(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1E9408(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
