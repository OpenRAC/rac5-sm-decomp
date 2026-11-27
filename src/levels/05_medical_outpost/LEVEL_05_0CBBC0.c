/* LEVEL_05:0x0CBBC0 -- placement copy of LEVEL_01_0CD618.c: caches the active scene nodes and rebuilds two transforms. */
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
extern Root *D_002213F0;
extern Root *D_00318180[1];
extern Node *D_00318184[1];
extern char D_00318220[];
extern char D_00318248[];
extern char D_003181C0[];
extern int func_087480(Inner *a, unsigned int b, int c, char *d);
extern int func_087508(int a, char *b);
extern void func_086888(char *a);
extern void func_086478(char *a, char *b, float f);

void func_0CBBC0(void)
{
    Node *q;

    D_00318180[0] = D_002213F0;
    q = D_00318180[0]->m->n;
    D_00318184[0] = q;
    func_087480(q->a8, 0xFFFFFFFF, q->a4 + 0x20, D_00318220);
    func_087508(D_00318184[0]->a8->f0 + 0x13C0, D_00318220);
    func_087480(D_00318184[0]->a8, 0xFFFFFFFF, D_00318184[0]->a4 + 0x20, D_00318248);
    func_087508(D_00318184[0]->a8->f0 + 0x13C0, D_00318248);
    func_086888(D_003181C0);
    func_086478(D_003181C0, D_00318220, 0.0f);
}
