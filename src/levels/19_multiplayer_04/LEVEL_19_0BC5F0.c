/* LEVEL_19:0x0BC5F0 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_001E47C0;
extern Root *D_0027A4C0[1];
extern Node *D_0027A4C4[1];
extern char D_0027A560[];
extern char D_0027A588[];
extern char D_0027A500[];
extern int func_07B5E8(Inner *a, unsigned int b, int c, char *d);
extern int func_07B670(int a, char *b);
extern void func_07A9F0(char *a);
extern void func_07A5E0(char *a, char *b, float f);

void func_0BC5F0(void)
{
    Node *q;

    D_0027A4C0[0] = D_001E47C0;
    q = D_0027A4C0[0]->m->n;
    D_0027A4C4[0] = q;
    func_07B5E8(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0027A560);
    func_07B670(D_0027A4C4[0]->a8->f0 + 0x13C0, D_0027A560);
    func_07B5E8(D_0027A4C4[0]->a8, 0xFFFFFFFF, D_0027A4C4[0]->a4 + 0x20, D_0027A588);
    func_07B670(D_0027A4C4[0]->a8->f0 + 0x13C0, D_0027A588);
    func_07A9F0(D_0027A500);
    func_07A5E0(D_0027A500, D_0027A560, 0.0f);
}
