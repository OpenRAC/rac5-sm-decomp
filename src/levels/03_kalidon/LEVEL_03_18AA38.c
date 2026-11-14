/* LEVEL_03:0x18AA38 -- puts the object into state 2, clears its timer and sets its flags, hands the global target to the spawn helper when there is one, runs the shared setup and returns 3. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x64 - 0x46];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    int timer;
} Obj;

extern Rec *D_0022118C[1];
extern char D_003B1A98[];
extern char D_00228130[];

extern void func_0807B0(Obj *a0, Rec *a1, float f12, int a2, float f13, int a3,
                        float f14, int a4, float f15, int a5, int a6, int a7);
extern void func_070FA8(Obj *o, char *a, char *b);

int func_18AA38(Obj *o)
{
    Rec *q;

    o->timer = 0;
    o->state = 2;
    o->flags |= 0x428;
    q = D_0022118C[0];
    if (q != 0) {
        func_0807B0(o, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0, 0, 1);
    }
    func_070FA8(o, D_003B1A98, D_00228130);
    o->state = 2;
    return 3;
}
