/* LEVEL_23:0x0C4450 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_00202B70;
extern Root *D_002FD700[1];
extern Node *D_002FD704[1];
extern char D_002FD7A0[];
extern char D_002FD7C8[];
extern char D_002FD740[];
extern int func_07F9E8(Inner *a, unsigned int b, int c, char *d);
extern int func_07FA70(int a, char *b);
extern void func_07EDF0(char *a);
extern void func_07E9E0(char *a, char *b, float f);

void func_0C4450(void)
{
    Node *q;

    D_002FD700[0] = D_00202B70;
    q = D_002FD700[0]->m->n;
    D_002FD704[0] = q;
    func_07F9E8(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_002FD7A0);
    func_07FA70(D_002FD704[0]->a8->f0 + 0x13C0, D_002FD7A0);
    func_07F9E8(D_002FD704[0]->a8, 0xFFFFFFFF, D_002FD704[0]->a4 + 0x20, D_002FD7C8);
    func_07FA70(D_002FD704[0]->a8->f0 + 0x13C0, D_002FD7C8);
    func_07EDF0(D_002FD740);
    func_07E9E0(D_002FD740, D_002FD7A0, 0.0f);
}
