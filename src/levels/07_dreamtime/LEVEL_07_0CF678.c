/* LEVEL_07:0x0CF678 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_0024AFF0;
extern Root *D_00341BC0[1];
extern Node *D_00341BC4[1];
extern char D_00341C60[];
extern char D_00341C88[];
extern char D_00341C00[];
extern int func_08BBF8(Inner *a, unsigned int b, int c, char *d);
extern int func_08BC80(int a, char *b);
extern void func_08B000(char *a);
extern void func_08ABF0(char *a, char *b, float f);

void func_0CF678(void)
{
    Node *q;

    D_00341BC0[0] = D_0024AFF0;
    q = D_00341BC0[0]->m->n;
    D_00341BC4[0] = q;
    func_08BBF8(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00341C60);
    func_08BC80(D_00341BC4[0]->a8->f0 + 0x13C0, D_00341C60);
    func_08BBF8(D_00341BC4[0]->a8, 0xFFFFFFFF, D_00341BC4[0]->a4 + 0x20, D_00341C88);
    func_08BC80(D_00341BC4[0]->a8->f0 + 0x13C0, D_00341C88);
    func_08B000(D_00341C00);
    func_08ABF0(D_00341C00, D_00341C60, 0.0f);
}
