/* LEVEL_10:0x0CEA58 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0023EAF0;
extern Root *D_003356C0[1];
extern Node *D_003356C4[1];
extern char D_00335760[];
extern char D_00335788[];
extern char D_00335700[];
extern int func_089EF8(Inner *a, unsigned int b, int c, char *d);
extern int func_089F80(int a, char *b);
extern void func_089300(char *a);
extern void func_088E88(char *a, char *b, float f);

void func_0CEA58(void)
{
    Node *q;

    D_003356C0[0] = D_0023EAF0;
    q = D_003356C0[0]->m->n;
    D_003356C4[0] = q;
    func_089EF8(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00335760);
    func_089F80(D_003356C4[0]->a8->f0 + 0x13C0, D_00335760);
    func_089EF8(D_003356C4[0]->a8, 0xFFFFFFFF, D_003356C4[0]->a4 + 0x20, D_00335788);
    func_089F80(D_003356C4[0]->a8->f0 + 0x13C0, D_00335788);
    func_089300(D_00335700);
    func_088E88(D_00335700, D_00335760, 0.0f);
}
