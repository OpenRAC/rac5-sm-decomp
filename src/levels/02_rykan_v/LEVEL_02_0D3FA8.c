/* LEVEL_02:0x0D3FA8 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0024CC00;
extern Root *D_003437C0[1];
extern Node *D_003437C4[1];
extern char D_00343860[];
extern char D_00343888[];
extern char D_00343800[];
extern int func_090458(Inner *a, unsigned int b, int c, char *d);
extern int func_0904E0(int a, char *b);
extern void func_08F860(char *a);
extern void func_08F450(char *a, char *b, float f);

void func_0D3FA8(void)
{
    Node *q;

    D_003437C0[0] = D_0024CC00;
    q = D_003437C0[0]->m->n;
    D_003437C4[0] = q;
    func_090458(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00343860);
    func_0904E0(D_003437C4[0]->a8->f0 + 0x13C0, D_00343860);
    func_090458(D_003437C4[0]->a8, 0xFFFFFFFF, D_003437C4[0]->a4 + 0x20, D_00343888);
    func_0904E0(D_003437C4[0]->a8->f0 + 0x13C0, D_00343888);
    func_08F860(D_00343800);
    func_08F450(D_00343800, D_00343860, 0.0f);
}
