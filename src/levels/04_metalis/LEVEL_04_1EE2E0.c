/* LEVEL_04:0x1EE2E0 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_00222B84;
extern char D_00222CC0[];
extern char D_00222CE0[];
extern char D_00222C20[];
extern void func_1EDC08(int a, int b, int c, char *t1, char *t2);
extern void func_1EE3F0(char *p, float a, float b);

void func_1EE2E0(int a, int b, int flag)
{
    if (flag)
        func_1EDC08(D_00222B84, a, b, D_00222CE0, D_00222C20);
    else
        func_1EDC08(D_00222B84, a, b, D_00222CC0, D_00222C20);
}

void func_1EE350(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1EE3F0(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
