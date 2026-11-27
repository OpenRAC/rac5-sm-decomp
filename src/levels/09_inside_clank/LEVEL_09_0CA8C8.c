/* LEVEL_09:0x0CA8C8 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0021CE70;
extern Root *D_00313A40[1];
extern Node *D_00313A44[1];
extern char D_00313AE0[];
extern char D_00313B08[];
extern char D_00313A80[];
extern int func_0864E0(Inner *a, unsigned int b, int c, char *d);
extern int func_086568(int a, char *b);
extern void func_0858E8(char *a);
extern void func_0854D8(char *a, char *b, float f);

void func_0CA8C8(void)
{
    Node *q;

    D_00313A40[0] = D_0021CE70;
    q = D_00313A40[0]->m->n;
    D_00313A44[0] = q;
    func_0864E0(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00313AE0);
    func_086568(D_00313A44[0]->a8->f0 + 0x13C0, D_00313AE0);
    func_0864E0(D_00313A44[0]->a8, 0xFFFFFFFF, D_00313A44[0]->a4 + 0x20, D_00313B08);
    func_086568(D_00313A44[0]->a8->f0 + 0x13C0, D_00313B08);
    func_0858E8(D_00313A80);
    func_0854D8(D_00313A80, D_00313AE0, 0.0f);
}
