/* LEVEL_08:0x0D85C0 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_00284980;
extern Root *D_0037B540[1];
extern Node *D_0037B544[1];
extern char D_0037B5E0[];
extern char D_0037B608[];
extern char D_0037B580[];
extern int func_091C90(Inner *a, unsigned int b, int c, char *d);
extern int func_091D18(int a, char *b);
extern void func_091098(char *a);
extern void func_090C88(char *a, char *b, float f);

void func_0D85C0(void)
{
    Node *q;

    D_0037B540[0] = D_00284980;
    q = D_0037B540[0]->m->n;
    D_0037B544[0] = q;
    func_091C90(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_0037B5E0);
    func_091D18(D_0037B544[0]->a8->f0 + 0x13C0, D_0037B5E0);
    func_091C90(D_0037B544[0]->a8, 0xFFFFFFFF, D_0037B544[0]->a4 + 0x20, D_0037B608);
    func_091D18(D_0037B544[0]->a8->f0 + 0x13C0, D_0037B608);
    func_091098(D_0037B580);
    func_090C88(D_0037B580, D_0037B5E0, 0.0f);
}
