/* LEVEL_01:0x0CD618 -- caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_002356F0;
extern Root *D_0032C2C0[1];
extern Node *D_0032C2C4[1];
extern char D_0032C360[];
extern char D_0032C388[];
extern char D_0032C300[];
extern int func_089B60(Inner *a, unsigned int b, int c, char *d);
extern int func_089BE8(int a, char *b);
extern void func_088F68(char *a);
extern void func_088B20(char *a, char *b, float f);

void func_0CD618(void)
{
    Node *q;

    D_0032C2C0[0] = D_002356F0;
    q = D_0032C2C0[0]->m->n;
    D_0032C2C4[0] = q;
    func_089B60(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0032C360);
    func_089BE8(D_0032C2C4[0]->a8->f0 + 0x13C0, D_0032C360);
    func_089B60(D_0032C2C4[0]->a8, 0xFFFFFFFF, D_0032C2C4[0]->a4 + 0x20, D_0032C388);
    func_089BE8(D_0032C2C4[0]->a8->f0 + 0x13C0, D_0032C388);
    func_088F68(D_0032C300);
    func_088B20(D_0032C300, D_0032C360, 0.0f);
}
