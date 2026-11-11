/* LEVEL_23:0x136890 -- placement copy of LEVEL_03_140DE8.c: resolves the three mandatory offset slots of the object's link record into pointers (failing when one is missing), resolves the optional fourth slot only when its target's +0x40 word is set, clears the state record, registers the object in the global and starts the follow-up helper with the mode byte. */
typedef struct Link {
    int a;
    int b;
    int c;
    int d;
} Link;

typedef struct State {
    int w0;
    int w4;
    char pad_08[8];
    unsigned char b10;
    unsigned char b11;
    unsigned char b12;
    unsigned char b13;
    unsigned char b14;
    unsigned char b15;
} State;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char mode;
    char pad_46[0x54 - 0x46];
    Link *link;
    State *state;
} Obj;

extern int D_001DA194;
extern Obj *D_001DA5B8;
extern void func_136AB8(Obj *o, unsigned int mode, int zero);

static __inline__ int Fixup(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_001DA194 + value;
    return 1;
}

int func_136890(Obj *o)
{
    Link *link = o->link;
    State *st = o->state;
    int value;
    char *rec;

    if (link == 0)
        return 0;
    if (st == 0)
        return 0;
    if (!Fixup(&link->a))
        return 0;
    if (!Fixup(&link->b))
        return 0;
    if (!Fixup(&link->c))
        return 0;
    value = link->d;
    if (value != 0) {
        rec = (char *)(D_001DA194 + value);
        if (*(int *)(rec + 0x40) == 0)
            link->d = 0;
        else
            link->d = (int)rec;
    }
    st->w0 = 0;
    st->w4 = 0;
    st->b10 = 0;
    st->b11 = 0;
    st->b14 = 0;
    st->b12 = 0;
    st->b15 = 0;
    st->b13 = 0;
    D_001DA5B8 = o;
    func_136AB8(o, o->mode, 0);
    return 1;
}
