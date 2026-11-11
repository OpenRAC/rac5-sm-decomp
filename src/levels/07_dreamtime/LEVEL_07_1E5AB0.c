/* LEVEL_07:0x1E5AB0 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_0021DF74;
extern char D_0021E0B0[];
extern char D_0021E0D0[];
extern char D_0021E010[];
extern void func_1E53D8(int a, int b, int c, char *t1, char *t2);
extern void func_1E5BC0(char *p, float a, float b);

void func_1E5AB0(int a, int b, int flag)
{
    if (flag)
        func_1E53D8(D_0021DF74, a, b, D_0021E0D0, D_0021E010);
    else
        func_1E53D8(D_0021DF74, a, b, D_0021E0B0, D_0021E010);
}

void func_1E5B20(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1E5BC0(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
