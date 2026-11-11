/* LEVEL_09:0x1BFA60 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_001F2F1C;
extern char D_001F3058[];
extern char D_001F3078[];
extern char D_001F2FB8[];
extern void func_1BF388(int a, int b, int c, char *t1, char *t2);
extern void func_1BFB70(char *p, float a, float b);

void func_1BFA60(int a, int b, int flag)
{
    if (flag)
        func_1BF388(D_001F2F1C, a, b, D_001F3078, D_001F2FB8);
    else
        func_1BF388(D_001F2F1C, a, b, D_001F3058, D_001F2FB8);
}

void func_1BFAD0(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1BFB70(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
