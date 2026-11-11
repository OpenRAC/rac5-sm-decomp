/* LEVEL_24:0x1BA9A8 -- placement copy of LEVEL_01_1E9CD0.c: writes endpoint pairs into slots obtained from a lookup. */
typedef struct {
    float x;
    float y;
    char pad8[0xC];
} Pt;
typedef struct {
    float x;
    float y;
} P2;
typedef struct {
    char pad0[8];
    Pt *pts;
    unsigned short a;
    unsigned short b;
} Hdr;
typedef struct Node {
    Hdr *h;
    struct Node *next;
} Node;
extern P2 *func_0905B8(int *ok, Node *n, int k);

void Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb(Node *n, float *val, int flag)
{
    int ok0, ok1, ok2;
    P2 *v;
    P2 *v1;
    P2 *v2;
    Pt *e;
    float x, y;
    int cnt;

    if (flag != 0 && n->next != n) {
        cnt = n->h->a + n->h->b - 1;
        e = (Pt *)((char *)n->h->pts + cnt * 0x14);
        x = e->x;
        y = e->y;
        v = func_0905B8(&ok0, n, 1);
        if (ok0 == 0)
            return;
        v->x = x;
        v->y = y;
        v1 = func_0905B8(&ok1, n, 1);
        if (ok1 == 0)
            return;
        v1->y = *val;
        v1->x = 1.0f;
    }
    v2 = func_0905B8(&ok2, n, 1);
    if (ok2 != 0) {
        v2->x = 1.0f;
        v2->y = *val;
    }
}
