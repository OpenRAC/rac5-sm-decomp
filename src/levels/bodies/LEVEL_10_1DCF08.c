/* LEVEL_10:0x1DCF08 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_00212214;
extern char D_00212350[];
extern char D_00212370[];
extern char D_002122B0[];
extern void func_1DC830(int a, int b, int c, char *t1, char *t2);
extern void func_1DD018(char *p, float a, float b);

void func_1DCF08(int a, int b, int flag)
{
    if (flag)
        func_1DC830(D_00212214, a, b, D_00212370, D_002122B0);
    else
        func_1DC830(D_00212214, a, b, D_00212350, D_002122B0);
}

void func_1DCF78(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1DD018(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
