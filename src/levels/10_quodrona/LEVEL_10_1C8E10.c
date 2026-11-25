/* LEVEL_10:0x1C8E10 -- placement copy of LEVEL_01_1C5430.c: placement copy of LEVEL_08_1F8A18.c: puts an object into its settled state: aligns its height with the table entry for its kind, re-registers its collision proxy (bounds from the helper, flags from the type record, slot 0 or 1 by box size) after unlinking the old registration, marks it as state 2 and runs the owner's optional settle hook; when the owner is busy only the owner helper is called. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

typedef struct State State;
struct State {
    State *next;
    char pad04[0x0F - 4];
    unsigned char b0F;
    void *w10;
    State **prev;
    float f18;
    int w1C;
    int w20;
};

typedef struct {
    char pad00[0x0C];
    unsigned char b0C;
    unsigned char b0D;
} Owner;

typedef struct {
    char pad00[0x34];
    float y;
    char pad38[0x40 - 0x38];
    Type *type;
    unsigned char b44;
    unsigned char b45;
    unsigned char b46;
    char pad47[0x54 - 0x47];
    Owner *owner;
    State *state;
    void *w5C;
    char pad60[0x64 - 0x60];
    unsigned int flags;
} Obj;

typedef struct {
    char pad00[8];
    float f8;
    char pad0C[0x20 - 0x0C];
} Ent20;

extern Ent20 D_00211CE8[];
extern char D_00238AF8[][0x68];

extern void func_07CCA0(Obj *o, int a);
extern int func_0823F0(Vec3 *lo, Vec3 *hi, void *w);
extern void func_0958E0(char *slot, State *st, Vec3 *lo, Vec3 *hi, unsigned int bits);
extern void func_027F90(void *a0);

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

void func_1C8E10(Obj *obj)
{
    Owner *owner;
    State *st;
    Ent20 *e;
    Type *type;
    Rec34 *rec;
    Vec3 lo;
    Vec3 hi;
    float dx;
    float dz;
    unsigned int tf;
    unsigned int base;
    unsigned int f;
    int idx;
    int sel;
    Vec3 *lop;

    owner = obj->owner;
    e = &D_00211CE8[obj->b46];
    st = obj->state;
    if (owner->b0C != 0) {
        func_07CCA0(obj, 1);
        return;
    }
    obj->y = obj->y + (e->f8 - st->f18);
    st->f18 = e->f8;
    tf = obj->flags;
    type = obj->type;
    base = tf & 0x1420;
    rec = type->recs + obj->b44;
    f = base | 1;
    if (rec->w0C != 0)
        f = base | 0x81;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    if (func_0823F0(&lo, &hi, st->w10) != 0) {
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
        func_0958E0(D_00238AF8[sel], st, lop, &hi, f);
    } else {
        Unlink(st);
    }
    obj->b45 = 2;
    if (owner->b0D != 0)
        func_027F90(obj->w5C);
    st->w20 = 0;
    st->w1C = 0;
}
