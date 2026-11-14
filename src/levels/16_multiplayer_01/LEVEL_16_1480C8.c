/* LEVEL_16:0x1480C8 -- placement copy of LEVEL_01_16C8A8.c: when the object is idle, turns the record's three stored offsets into pointers against the resource base, running the start helper first if the first one was zero; reports whether it ran. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad_0C[0x14 - 0xC];
    unsigned char b14;
} Rec;

typedef struct {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern char *D_001B48A4;
extern void func_14A6A0(Obj *o);

static inline int Rebase(int *slot)
{
    int off = *slot;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        *slot = (int)(D_001B48A4 + off);
        ok = 1;
    }
    return ok;
}

int func_1480C8(Obj *o)
{
    Rec *r;

    if (o->state != 0) {
        return 0;
    }
    r = o->rec;
    if (Rebase(&r->w0) == 0) {
        if (r->b14 != 0) {
            return 0;
        }
        func_14A6A0(o);
    }
    if (r->w8 != 0) {
        r->w8 = (int)(D_001B48A4 + r->w8);
    }
    if (r->w4 != 0) {
        r->w4 = (int)(D_001B48A4 + r->w4);
    }
    return 1;
}
