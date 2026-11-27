/* LEVEL_06:0x0C7F18 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_00222470;
extern Root *D_00319040[1];
extern Node *D_00319044[1];
extern char D_003190E0[];
extern char D_00319108[];
extern char D_00319080[];
extern int func_0829A0(Inner *a, unsigned int b, int c, char *d);
extern int func_082A28(int a, char *b);
extern void func_081DA8(char *a);
extern void func_081998(char *a, char *b, float f);

void func_0C7F18(void)
{
    Node *q;

    D_00319040[0] = D_00222470;
    q = D_00319040[0]->m->n;
    D_00319044[0] = q;
    func_0829A0(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_003190E0);
    func_082A28(D_00319044[0]->a8->f0 + 0x13C0, D_003190E0);
    func_0829A0(D_00319044[0]->a8, 0xFFFFFFFF, D_00319044[0]->a4 + 0x20, D_00319108);
    func_082A28(D_00319044[0]->a8->f0 + 0x13C0, D_00319108);
    func_081DA8(D_00319080);
    func_081998(D_00319080, D_003190E0, 0.0f);
}
