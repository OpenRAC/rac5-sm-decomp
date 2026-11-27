/* LEVEL_16:0x0BCD18 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_001E4640;
extern Root *D_0027A340[1];
extern Node *D_0027A344[1];
extern char D_0027A3E0[];
extern char D_0027A408[];
extern char D_0027A380[];
extern int func_07B100(Inner *a, unsigned int b, int c, char *d);
extern int func_07B188(int a, char *b);
extern void func_07A508(char *a);
extern void func_07A0F8(char *a, char *b, float f);

void func_0BCD18(void)
{
    Node *q;

    D_0027A340[0] = D_001E4640;
    q = D_0027A340[0]->m->n;
    D_0027A344[0] = q;
    func_07B100(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0027A3E0);
    func_07B188(D_0027A344[0]->a8->f0 + 0x13C0, D_0027A3E0);
    func_07B100(D_0027A344[0]->a8, 0xFFFFFFFF, D_0027A344[0]->a4 + 0x20, D_0027A408);
    func_07B188(D_0027A344[0]->a8->f0 + 0x13C0, D_0027A408);
    func_07A508(D_0027A380);
    func_07A0F8(D_0027A380, D_0027A3E0, 0.0f);
}
