/* LEVEL_02:0x1EBF90 -- placement copy of LEVEL_01_1D72F8.c: dispatches a draw helper with one of two tables, then walks a list. */
typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_0021E1EC;
extern char D_0021E328[];
extern char D_0021E348[];
extern char D_0021E288[];
extern void func_1EB8B8(int a, int b, int c, char *t1, char *t2);
extern void func_1EC0A0(char *p, float a, float b);

void func_1EBF90(int a, int b, int flag)
{
    if (flag)
        func_1EB8B8(D_0021E1EC, a, b, D_0021E348, D_0021E288);
    else
        func_1EB8B8(D_0021E1EC, a, b, D_0021E328, D_0021E288);
}

void func_1EC000(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_1EC0A0(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
