/* LEVEL_03:0x0CD400 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_00250570;
extern Root *D_00347140[1];
extern Node *D_00347144[1];
extern char D_003471E0[];
extern char D_00347208[];
extern char D_00347180[];
extern int func_089980(Inner *a, unsigned int b, int c, char *d);
extern int func_089A08(int a, char *b);
extern void func_088D88(char *a);
extern void func_088978(char *a, char *b, float f);

void func_0CD400(void)
{
    Node *q;

    D_00347140[0] = D_00250570;
    q = D_00347140[0]->m->n;
    D_00347144[0] = q;
    func_089980(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_003471E0);
    func_089A08(D_00347144[0]->a8->f0 + 0x13C0, D_003471E0);
    func_089980(D_00347144[0]->a8, 0xFFFFFFFF, D_00347144[0]->a4 + 0x20, D_00347208);
    func_089A08(D_00347144[0]->a8->f0 + 0x13C0, D_00347208);
    func_088D88(D_00347180);
    func_088978(D_00347180, D_003471E0, 0.0f);
}
