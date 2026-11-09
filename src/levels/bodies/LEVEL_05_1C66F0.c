/* LEVEL_05:0x1C66F0 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_001F8214;
extern char D_001F8350[];
extern char D_001F8370[];
extern char D_001F82B0[];
extern void func_1C6018(int a, int b, int c, char *t1, char *t2);
extern void func_1C6800(char *p, float a, float b);

void func_1C66F0(int a, int b, int flag)
{
    if (flag)
        func_1C6018(D_001F8214, a, b, D_001F8370, D_001F82B0);
    else
        func_1C6018(D_001F8214, a, b, D_001F8350, D_001F82B0);
}

void func_1C6760(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1C6800(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
