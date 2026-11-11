/* LEVEL_01:0x18A5D0 -- two-step trigger object: when func_027408 reports the abort condition it releases its record's linked object and flags itself through func_07C670; otherwise state 0 waits for func_084708 to accept one record word (then state 1), and state 1 waits for it to accept another word, starts an effect through func_0267A8 and moves to state 2. */
typedef struct {
    char pad00[0x54];
    int w54;
    int w58;
    char pad5C[8];
    void *w64;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern char D_00235140[];
extern int func_027408(int a, int b);
extern void func_18D270(void *a0);
extern void func_07C670(Obj *o, int on);
extern int func_084708(int a, const void *b);
extern void func_0267A8(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_18A768(void);

void func_18A5D0(Obj *o)
{
    Rec *r;

    r = o->rec;
    if (func_027408(1, 0xFF) != 0) {
        func_18D270(r->w64);
        func_07C670(o, 1);
        return;
    }
    switch (o->state) {
    case 0: {
        char *g = D_00235140;
        if (func_084708(r->w54, g + 0x30) != 0)
            o->state = 1;
        break;
    }
    case 1: {
        char *g = D_00235140;
        if (func_084708(r->w58, g + 0x30) != 0) {
            func_0267A8(1, 1, (int)func_18A768, 0, (int)o, -1, 1);
            o->state = 2;
        }
        break;
    }
    case 2:
        break;
    }
}
