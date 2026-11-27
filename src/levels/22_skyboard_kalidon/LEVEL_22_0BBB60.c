/* LEVEL_22:0x0BBB60 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_001872F0;
extern Root *D_00281E80[1];
extern Node *D_00281E84[1];
extern char D_00281F20[];
extern char D_00281F48[];
extern char D_00281EC0[];
extern int func_07AF40(Inner *a, unsigned int b, int c, char *d);
extern int func_07AFC8(int a, char *b);
extern void func_07A348(char *a);
extern void func_079F38(char *a, char *b, float f);

void func_0BBB60(void)
{
    Node *q;

    D_00281E80[0] = D_001872F0;
    q = D_00281E80[0]->m->n;
    D_00281E84[0] = q;
    func_07AF40(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00281F20);
    func_07AFC8(D_00281E84[0]->a8->f0 + 0x13C0, D_00281F20);
    func_07AF40(D_00281E84[0]->a8, 0xFFFFFFFF, D_00281E84[0]->a4 + 0x20, D_00281F48);
    func_07AFC8(D_00281E84[0]->a8->f0 + 0x13C0, D_00281F48);
    func_07A348(D_00281EC0);
    func_079F38(D_00281EC0, D_00281F20, 0.0f);
}
