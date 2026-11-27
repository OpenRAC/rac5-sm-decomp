/* LEVEL_04:0x0D2EB0 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0024FF00;
extern Root *D_00346AC0[1];
extern Node *D_00346AC4[1];
extern char D_00346B60[];
extern char D_00346B88[];
extern char D_00346B00[];
extern int func_08CE30(Inner *a, unsigned int b, int c, char *d);
extern int func_08CEB8(int a, char *b);
extern void func_08C238(char *a);
extern void func_08BE28(char *a, char *b, float f);

void func_0D2EB0(void)
{
    Node *q;

    D_00346AC0[0] = D_0024FF00;
    q = D_00346AC0[0]->m->n;
    D_00346AC4[0] = q;
    func_08CE30(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00346B60);
    func_08CEB8(D_00346AC4[0]->a8->f0 + 0x13C0, D_00346B60);
    func_08CE30(D_00346AC4[0]->a8, 0xFFFFFFFF, D_00346AC4[0]->a4 + 0x20, D_00346B88);
    func_08CEB8(D_00346AC4[0]->a8->f0 + 0x13C0, D_00346B88);
    func_08C238(D_00346B00);
    func_08BE28(D_00346B00, D_00346B60, 0.0f);
}
