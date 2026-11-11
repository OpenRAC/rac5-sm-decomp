/* LEVEL_02:0x1ABDC0 -- per-frame state machine: state 0 moves to 1 when a flag bit is set or func_08B060 accepts the record's linked word, state 1 claims the object's slot in the global byte table (state 2, registering the effect through func_027080) or, when taken, goes to state 3; state 3 draws through func_0AC910/func_0AC948 and runs func_1ABEF0 on success, state 4 runs it directly. */
typedef struct {
    int w0;
    int w4;
} Rec;

typedef struct O {
    char pad00[0x45];
    unsigned char b45;
    unsigned char state;
    char pad47[0x54 - 0x47];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int flags;
} O;

extern unsigned char D_0024C650[];
extern unsigned char D_003AEDF0[];
extern int func_08B060(int a, unsigned char *b);
extern void func_027080(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_0AC910(int a, int b, int c, int d, int e, int f);
extern int func_0AC948(int a);
extern void func_1ABEF0(O *o);

void func_1ABDC0(O *o)
{
    Rec *rec;
    unsigned char *g;
    unsigned char *q;
    int v;
    int next;

    rec = o->rec;
    if (o->state == 2)
        return;
    g = D_0024C650;
    q = g + 0x30;
    if (o->state == 0) {
        if ((o->flags & 0x200000) != 0 || ((v = rec->w4) != 0 && func_08B060(v, q) != 0))
            o->state = 1;
    }
    if (o->state == 1) {
        if (D_003AEDF0[o->b45] == 0) {
            D_003AEDF0[o->b45] = 1;
            func_027080(o->b45, 1, (int)func_1ABEF0, 0, (int)o, -1, 1);
            next = 2;
        } else {
            next = 3;
        }
        o->state = next;
    }
    if (o->state == 3) {
        func_0AC910(0, 0xFF000000, 0x20, 0x20, 3, 1);
        if (func_0AC948(0) != 0)
            func_1ABEF0(o);
    } else if (o->state == 4) {
        func_1ABEF0(o);
    }
}
