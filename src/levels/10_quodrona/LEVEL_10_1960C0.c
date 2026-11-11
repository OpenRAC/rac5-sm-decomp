/* LEVEL_10:0x1960C0 -- placement copy of LEVEL_02_1ABDC0.c: per-frame state machine: state 0 moves to 1 when a flag bit is set or func_084D08 accepts the record's linked word, state 1 claims the object's slot in the global byte table (state 2, registering the effect through func_026088) or, when taken, goes to state 3; state 3 draws through func_0A7118/func_0A7150 and runs func_196218 on success, state 4 runs it directly. */
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

extern unsigned char D_0023E540[];
extern unsigned char D_003A0268[];
extern int func_084D08(int a, unsigned char *b);
extern void func_026088(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_0A7118(int a, int b, int c, int d, int e, int f);
extern int func_0A7150(int a);
extern void func_196218(O *o);

void func_1960C0(O *o)
{
    Rec *rec;
    unsigned char *g;
    unsigned char *q;
    int v;
    int next;

    rec = o->rec;
    if (o->state == 2)
        return;
    g = D_0023E540;
    q = g + 0x30;
    if (o->state == 0) {
        if ((o->flags & 0x200000) != 0 || ((v = rec->w4) != 0 && func_084D08(v, q) != 0))
            o->state = 1;
    }
    if (o->state == 1) {
        if (D_003A0268[o->b45] == 0) {
            D_003A0268[o->b45] = 1;
            func_026088(o->b45, 1, (int)func_196218, 0, (int)o, -1, 1);
            next = 2;
        } else {
            next = 3;
        }
        o->state = next;
    }
    if (o->state == 3) {
        func_0A7118(0, 0xFF000000, 0x20, 0x20, 3, 1);
        if (func_0A7150(0) != 0)
            func_196218(o);
    } else if (o->state == 4) {
        func_196218(o);
    }
}
