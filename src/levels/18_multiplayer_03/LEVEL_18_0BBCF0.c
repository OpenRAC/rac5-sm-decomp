/* LEVEL_18:0x0BBCF0 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_001E49C0;
extern Root *D_0027A6C0[1];
extern Node *D_0027A6C4[1];
extern char D_0027A760[];
extern char D_0027A788[];
extern char D_0027A700[];
extern int func_07AA80(Inner *a, unsigned int b, int c, char *d);
extern int func_07AB08(int a, char *b);
extern void func_079E88(char *a);
extern void func_079A78(char *a, char *b, float f);

void func_0BBCF0(void)
{
    Node *q;

    D_0027A6C0[0] = D_001E49C0;
    q = D_0027A6C0[0]->m->n;
    D_0027A6C4[0] = q;
    func_07AA80(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0027A760);
    func_07AB08(D_0027A6C4[0]->a8->f0 + 0x13C0, D_0027A760);
    func_07AA80(D_0027A6C4[0]->a8, 0xFFFFFFFF, D_0027A6C4[0]->a4 + 0x20, D_0027A788);
    func_07AB08(D_0027A6C4[0]->a8->f0 + 0x13C0, D_0027A788);
    func_079E88(D_0027A700);
    func_079A78(D_0027A700, D_0027A760, 0.0f);
}
