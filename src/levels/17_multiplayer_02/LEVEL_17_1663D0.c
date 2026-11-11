/* LEVEL_17:0x1663D0 -- placement copy of LEVEL_02_1C1E38.c: when the owner's source is active, plays two sounds and spawns an effect at its position; then unlinks the owner's list node and notifies it. */

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

extern int D_001B17E4;
extern int D_001B17E8;
extern char D_002D6B48[];
extern char D_002D6B98[];
extern char D_001C01B8[];

extern void func_0EDA60(int h, int a, int b, void *p, float x, float y);
extern void func_0D3560(int a0, float *pos, void *p, float f0, float f1, float f2, float f3, float f4, float f5, unsigned int color, float f6, int t0, int t1, float f7, int t2, int t3, int s0, unsigned int s1);
extern void func_06FF78(void *o, int a);

static __inline__ void Snd(int h, int a, int b, void *p)
{
    func_0EDA60(h, a, b, p, 0.0f, 1.0471976f);
}

void func_1663D0(struct Obj1C1E38 *o, int a, int b)
{
    struct Node1C1E38 *n;

    n = o->node58;
    if (o->src54->b1C != 0) {
        Snd(D_001B17E4, a, b, D_002D6B48);
        Snd(D_001B17E8, a, b, D_002D6B98);
        func_0D3560(0, o->pos30, D_001C01B8, 0.2f, 0.0f, 9.0f, 9.0f, 0.0f, 0.0f, 0xFF2F4AC7, 0.0f, 3, 0x2A, 0.0f, 1, 0, 0, 0xFFFFFFFF);
    }
    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    func_06FF78(o, 1);
}
