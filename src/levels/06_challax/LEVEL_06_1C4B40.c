/* LEVEL_06:0x1C4B40 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_001F8154;
extern char D_001F8290[];
extern char D_001F82B0[];
extern char D_001F81F0[];
extern void func_1C4468(int a, int b, int c, char *t1, char *t2);
extern void func_1C4C50(char *p, float a, float b);

void func_1C4B40(int a, int b, int flag)
{
    if (flag)
        func_1C4468(D_001F8154, a, b, D_001F82B0, D_001F81F0);
    else
        func_1C4468(D_001F8154, a, b, D_001F8290, D_001F81F0);
}

void func_1C4BB0(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1C4C50(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
