/* LEVEL_20:0x0A7248 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
typedef struct Inner {
    int f0;
} Inner;
typedef struct Node {
    int pad0;
    int a4;
    Inner *a8;
} Node;
typedef struct Mid {
    int pad0;
    Node *n;
} Mid;
typedef struct Root {
    char pad[0x40];
    Mid *m;
} Root;
extern Root *D_0013BFC0;
extern Root *D_0019DB80[1];
extern Node *D_0019DB84[1];
extern char D_0019DC20[];
extern char D_0019DC48[];
extern char D_0019DBC0[];
extern int func_068D70(Inner *a, unsigned int b, int c, char *d);
extern int func_068DF8(int a, char *b);
extern void func_068178(char *a);
extern void func_067D68(char *a, char *b, float f);

void func_0A7248(void)
{
    Node *q;

    D_0019DB80[0] = D_0013BFC0;
    q = D_0019DB80[0]->m->n;
    D_0019DB84[0] = q;
    func_068D70(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0019DC20);
    func_068DF8(D_0019DB84[0]->a8->f0 + 0x13C0, D_0019DC20);
    func_068D70(D_0019DB84[0]->a8, 0xFFFFFFFF, D_0019DB84[0]->a4 + 0x20, D_0019DC48);
    func_068DF8(D_0019DB84[0]->a8->f0 + 0x13C0, D_0019DC48);
    func_068178(D_0019DBC0);
    func_067D68(D_0019DBC0, D_0019DC20, 0.0f);
}
