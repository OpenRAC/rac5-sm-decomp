/* LEVEL_17:0x0BC258 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_001D5940;
extern Root *D_0026B640[1];
extern Node *D_0026B644[1];
extern char D_0026B6E0[];
extern char D_0026B708[];
extern char D_0026B680[];
extern int func_07BB78(Inner *a, unsigned int b, int c, char *d);
extern int func_07BC00(int a, char *b);
extern void func_07AF80(char *a);
extern void func_07AB70(char *a, char *b, float f);

void func_0BC258(void)
{
    Node *q;

    D_0026B640[0] = D_001D5940;
    q = D_0026B640[0]->m->n;
    D_0026B644[0] = q;
    func_07BB78(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0026B6E0);
    func_07BC00(D_0026B644[0]->a8->f0 + 0x13C0, D_0026B6E0);
    func_07BB78(D_0026B644[0]->a8, 0xFFFFFFFF, D_0026B644[0]->a4 + 0x20, D_0026B708);
    func_07BC00(D_0026B644[0]->a8->f0 + 0x13C0, D_0026B708);
    func_07AF80(D_0026B680);
    func_07AB70(D_0026B680, D_0026B6E0, 0.0f);
}
