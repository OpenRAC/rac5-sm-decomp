/* LEVEL_24:0x0C6F60 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_002015F0;
extern Root *D_002F8180[1];
extern Node *D_002F8184[1];
extern char D_002F8220[];
extern char D_002F8248[];
extern char D_002F81C0[];
extern int func_082DC8(Inner *a, unsigned int b, int c, char *d);
extern int func_082E50(int a, char *b);
extern void func_0821D0(char *a);
extern void func_081DC0(char *a, char *b, float f);

void func_0C6F60(void)
{
    Node *q;

    D_002F8180[0] = D_002015F0;
    q = D_002F8180[0]->m->n;
    D_002F8184[0] = q;
    func_082DC8(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_002F8220);
    func_082E50(D_002F8184[0]->a8->f0 + 0x13C0, D_002F8220);
    func_082DC8(D_002F8184[0]->a8, 0xFFFFFFFF, D_002F8184[0]->a4 + 0x20, D_002F8248);
    func_082E50(D_002F8184[0]->a8->f0 + 0x13C0, D_002F8248);
    func_0821D0(D_002F81C0);
    func_081DC0(D_002F81C0, D_002F8220, 0.0f);
}
