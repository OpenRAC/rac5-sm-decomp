/* LEVEL_02:0x1A41C8 -- switches an object's collision record on: initialises its state, rebuilds the flag word from the type record, registers the bounds in the small or large pool and sets the cooldown bytes. */
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

struct Obj;

typedef struct {
    int next;
    char pad04[0x0A];
    unsigned char b0E;
    unsigned char b0F;
    struct Obj *w10;
    int w14;
} State;

typedef struct Obj {
    char pad00[0x40];
    Type *type;
    char pad44a[0x44 - 0x44];
    unsigned char b44;
    char pad45[0x58 - 0x45];
    State *state;
    char pad5C[0x64 - 0x5C];
    int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_00246BF8[];

extern int func_088610(float *a, float *b, Obj *o);
extern void func_09BC40(Rec68 *r, State *s, float *a, float *b, unsigned int bits);

int func_1A41C8(Obj *o)
{
    float a[4];
    float b[4];
    State *s;
    unsigned int bits;
    unsigned int keep;
    Rec34 *rec;
    int big;
    float dx;
    float dz;

    s = o->state;
    s->b0E = 2;
    s->w10 = o;
    s->w14 = 0;
    s->next = 0;
    keep = o->flags & 0x1420;
    rec = o->type->recs + o->b44;
    bits = keep | 1;
    if (rec->w0C != 0)
        bits = keep | 0x81;
    if (rec->w10 != 0)
        bits |= 0x100;
    if (rec->w14 != 0)
        bits |= 0x200;
    if (o->type->b3F == 1)
        bits |= 0x800;
    if (((unsigned int)o->flags >> 3) & 1)
        bits |= 0x400;
    if (func_088610(a, b, o) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz)
            big = 1;
        else
            big = 0;
        s->b0F = big;
        func_09BC40(&D_00246BF8[big], s, a, b, bits);
    }
    o->b77 = 0x80;
    o->b76 = 0x3C;
    return 1;
}
