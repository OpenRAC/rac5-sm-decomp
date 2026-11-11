/* LEVEL_02:0x1C1E38 -- when the owner's source is active, plays two sounds and spawns an effect at its position; then unlinks the owner's list node and notifies it. */

struct Src1C1E38 {
    char pad00[0x1C];
    unsigned char b1C;
};

struct Node1C1E38 {
    struct Node1C1E38 *next;
    char pad04[0x10];
    struct Node1C1E38 *prev;
};

struct Obj1C1E38 {
    char pad00[0x30];
    float pos30[3];
    char pad3C[0x18];
    struct Src1C1E38 *src54;
    struct Node1C1E38 *node58;
};

extern int D_0021DC4C;
extern int D_0021DC50;
extern char D_003AF040[];
extern char D_003AF090[];
extern char D_0022CDF8[];

extern void func_110B68(int h, int a, int b, void *p, float x, float y);
extern void func_0EB5D8(int a0, float *pos, void *p, float f0, float f1, float f2, float f3, float f4, float f5, unsigned int color, float f6, int t0, int t1, float f7, int t2, int t3, int s0, unsigned int s1);
extern void func_082F58(void *o, int a);

static __inline__ void Snd(int h, int a, int b, void *p)
{
    func_110B68(h, a, b, p, 0.0f, 1.0471976f);
}

void func_1C1E38(struct Obj1C1E38 *o, int a, int b)
{
    struct Node1C1E38 *n;

    n = o->node58;
    if (o->src54->b1C != 0) {
        Snd(D_0021DC4C, a, b, D_003AF040);
        Snd(D_0021DC50, a, b, D_003AF090);
        func_0EB5D8(0, o->pos30, D_0022CDF8, 0.2f, 0.0f, 9.0f, 9.0f, 0.0f, 0.0f, 0xFF2F4AC7, 0.0f, 3, 0x2A, 0.0f, 1, 0, 0, 0xFFFFFFFF);
    }
    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    func_082F58(o, 1);
}
