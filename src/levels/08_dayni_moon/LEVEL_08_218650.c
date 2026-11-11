/* LEVEL_08:0x218650 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_00252D8C;
extern char D_00252EC8[];
extern char D_00252EE8[];
extern char D_00252E28[];
extern void func_217F78(int a, int b, int c, char *t1, char *t2);
extern void func_218760(char *p, float a, float b);

void func_218650(int a, int b, int flag)
{
    if (flag)
        func_217F78(D_00252D8C, a, b, D_00252EE8, D_00252E28);
    else
        func_217F78(D_00252D8C, a, b, D_00252EC8, D_00252E28);
}

void func_2186C0(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_218760(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
