/* LEVEL_21:0x0ADC60 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0017D870;
extern Root *D_00243B00[1];
extern Node *D_00243B04[1];
extern char D_00243BA0[];
extern char D_00243BC8[];
extern char D_00243B40[];
extern int func_06E208(Inner *a, unsigned int b, int c, char *d);
extern int func_06E290(int a, char *b);
extern void func_06D610(char *a);
extern void func_06D200(char *a, char *b, float f);

void func_0ADC60(void)
{
    Node *q;

    D_00243B00[0] = D_0017D870;
    q = D_00243B00[0]->m->n;
    D_00243B04[0] = q;
    func_06E208(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00243BA0);
    func_06E290(D_00243B04[0]->a8->f0 + 0x13C0, D_00243BA0);
    func_06E208(D_00243B04[0]->a8, 0xFFFFFFFF, D_00243B04[0]->a4 + 0x20, D_00243BC8);
    func_06E290(D_00243B04[0]->a8->f0 + 0x13C0, D_00243BC8);
    func_06D610(D_00243B40);
    func_06D200(D_00243B40, D_00243BA0, 0.0f);
}
