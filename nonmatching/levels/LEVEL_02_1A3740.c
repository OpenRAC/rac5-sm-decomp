/* USA LEVEL_02.REL:0x1A3740, 500-byte candidate (22 November 2026).
 * Measured pinned --flag=-fno-gcse: 17 differing words; first difference at
 * 0x138.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

typedef struct State State;
struct State {
    State *next;
    char pad04[0x0F - 4];
    unsigned char b0F;
    int w10;
    State **prev;
};

typedef struct {
    int w0;
    unsigned char b4;
} Owner;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    char pad45[0x54 - 0x45];
    Owner *owner;
    State *state;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Rec;

extern Rec *D_0021D604;
extern char D_00246BF8[][0x68];

extern int func_088610(Vec3 *lo, Vec3 *hi, int w);
extern void func_09BC40(char *slot, State *st, Vec3 *lo, Vec3 *hi, unsigned int bits);
extern void func_0872A0(float a, float b, float c, float d, Obj *o, Rec *r, Owner *owner, int e, int f, int g, int h, int i);

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Unlink(State *s)
{
    if (s->prev != 0) {
        *s->prev = s->next;
        if (s->next == 0) {
            s->prev = 0;
        } else {
            s->next->prev = s->prev;
            s->prev = 0;
        }
    }
}

void func_1A3740(Obj *obj, Vec3 *src)
{
    State *st;
    Owner *owner;
    Type *type;
    Rec34 *rec;
    Vec3 lo;
    Vec3 hi;
    float dx;
    float dz;
    unsigned int tf;
    unsigned int base;
    unsigned int alt;
    unsigned int f;
    unsigned int fl;
    int idx;
    int sel;
    Vec3 *lop;
    Rec *cb;

    st = obj->state;
    Copy3(&obj->pos, src);
    tf = obj->flags;
    type = obj->type;
    base = tf & 0x1420;
    rec = type->recs + obj->b44;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0)
        f = alt;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    fl = f | 0x10;
    if (func_088610(&lo, &hi, st->w10) != 0) {
        dx = hi.x - lo.x;
        dz = hi.z - lo.z;
        if (8.0f < dx || 8.0f < dz)
            idx = 1;
        else
            idx = 0;
        lop = &lo;
        sel = idx;
        Unlink(st);
        st->b0F = idx;
        func_09BC40(D_00246BF8[sel], st, lop, &hi, fl);
        owner = obj->owner;
    } else {
        Unlink(st);
        owner = obj->owner;
    }
    cb = D_0021D604;
    if (owner->w0 == 0 && cb != 0)
        func_0872A0(cb->f14, cb->f18, cb->f1C, cb->f20, obj, cb, owner, 0, 0, 0, 0, 1);
    owner->b4 = 1;
}
