/* LEVEL_08:0x1999F8 -- callback: turns the block's stored offsets into pointers into the shared table (slots 0x2C and 0x3C only when the target has its flag word set), running the helper after the second slot. */
typedef struct Rec {
    char pad0[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    int w3C;
} Rec;

typedef struct Obj {
    char pad0[0x54];
    Rec *rec;
} Obj;

typedef struct Target {
    char pad0[0x40];
    int w40;
} Target;

extern char *D_0024FC54;
extern void func_0300E0(Rec *r);

void func_1999F8(Obj *o)
{
    Rec *r = o->rec;
    Target *t;

    if (r->w2C != 0) {
        t = (Target *)(D_0024FC54 + r->w2C);
        if (t->w40 == 0) {
            r->w2C = 0;
        } else {
            r->w2C = (int)t;
        }
    }
    if (r->w30 != 0)
        r->w30 = (int)(D_0024FC54 + r->w30);
    func_0300E0(r);
    if (r->w34 != 0)
        r->w34 = (int)(D_0024FC54 + r->w34);
    if (r->w38 != 0)
        r->w38 = (int)(D_0024FC54 + r->w38);
    if (r->w3C != 0) {
        t = (Target *)(D_0024FC54 + r->w3C);
        if (t->w40 == 0) {
            r->w3C = 0;
        } else {
            r->w3C = (int)t;
        }
    }
}
